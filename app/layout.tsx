import { RouterLink, PropsWithChildren } from "@lcui/react";
import '@lcui/react-icons/dist/style.css';
import './global.css';

export default function RootLayout({ children }: PropsWithChildren) {
  const tabs = [
    {
      label: "Home",
      to: "/",
    },
    {
      label: "About",
      to: "/about",
    },
  ];
  return (
    <div className="w-full h-full">
      <div className="bg-slate-200 flex justify-center pt-1">
        {tabs.map((item) => (
          <RouterLink
            key={item.to}
            to={item.to}
            className="px-6 py-2 text-sm rounded-t mx-1"
            activeClass="bg-white"
            exact
          >
            {item.label}
          </RouterLink>
        ))}
      </div>
      {children}
    </div>
  );
}
