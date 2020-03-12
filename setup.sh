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

install_xmake() {
  if [ ! -x "$(which xmake)" ]; then
    echo installing xmake ...
    curl -fsSL https://xmake.io/shget.text > install_xmake.sh
    bash install_xmake.sh
    rm install_xmake.sh
    source ~/.xmake/profile
  fi
}

install_dependencies() {
  echo installing dependencies ...
  sudo apt-get -qq -y install build-essential automake libtool pkg-config libsqlite3-dev libpng-dev libjpeg-dev libxml2-dev libfreetype6-dev libx11-dev
}

install_lcui() {
  echo "============================================" >> $logfile
  echo "install LCUI" >> $logfile
  echo "============================================" >> $logfile
  cd $repodir
  if [ ! -d "LCUI" ]; then
    echo "downloading LCUI ..."
    wget https://github.com/lc-soft/LCUI/archive/develop.zip -O LCUI-develop.zip
    echo "extracting LCUI ..."
    unzip LCUI-develop.zip >> $logfile
    rm LCUI-develop.zip
    mv LCUI-develop LCUI
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
install_xmake
install_lcui

cd $rootdir
if [ ! -d "app/lib" ]; then
  mkdir app/lib
fi
cp vendor/lib/*.so.* app/lib
cp vendor/lib/*.so app/lib

echo the building environment has been completed!
