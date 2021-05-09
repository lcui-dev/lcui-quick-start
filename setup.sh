#!/bin/sh

rootdir=`pwd`
logfile=setup.log
installdir=$rootdir/vendor
repodir=$installdir/src

if [ ! -d $installdir ]; then
  mkdir $installdir
fi
if [ ! -d $repodir ]; then
  mkdir $repodir
fi

echo "============================================" >> $logfile
echo "start at" `date` >> $logfile
echo "============================================" >> $logfile

echo "rootdir: ${rootdir}"
echo "logfile: ${logfile}"
echo "repodir: ${repodir}"
echo "installdir: ${installdir}"
echo ""

download_github_repo() {
  local owner="$1"
  local name="$2"
  local version="$3"
  echo "downloading $name ..."
  wget https://github.com/$owner/$name/archive/$version.zip -O $name-$version.zip
  echo "extracting $name ..."
  unzip $name-$version.zip >> $logfile
  rm $name-$version.zip
  mv $name-$version $name
}

install_dependencies() {
  echo "installing dependencies ..."
  sudo apt-get -qq -y install build-essential unzip automake libtool pkg-config libsqlite3-dev libpng-dev libjpeg-dev libxml2-dev libfreetype6-dev libx11-dev
}

install_lcui() {
  echo "============================================" >> $logfile
  echo "install LCUI" >> $logfile
  echo "============================================" >> $logfile
  cd $repodir
  if [ ! -d "LCUI" ]; then
    download_github_repo "lc-soft" "LCUI" "develop"
    cd LCUI
    ./autogen.sh >> $logfile
    echo "configuring LCUI ..."
    ./configure --prefix=$installdir >> $logfile
  else
    cd LCUI
  fi
  echo "building LCUI ..."
  make >> $logfile
  make install >> $logfile
  echo "LCUI have been installed"
  cd $repodir
}

install_dependencies
install_lcui

cd $rootdir
if [ ! -d "app/lib" ]; then
  mkdir app/lib
fi
cp vendor/lib/*.so.* app/lib
cp vendor/lib/*.so app/lib

echo the building environment has been completed!
