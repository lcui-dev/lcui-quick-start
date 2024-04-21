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
      label: "about",
      to: "/about",
    },
  ];
  return (
    <div className="w-full h-full">
      <div className="bg-slate-200 flex justify-center">
        {tabs.map((item) => (
          <RouterLink
            key={item.to}
            to={item.to}
            className="px-6 py-4 text-base rounded-t"
            activeClass="text-blue-500 bg-white"
            exact
          >
            {item.label}
          </RouterLink>
        ))}
      </div>
      <div className="px-6 py-4">
        {children}
      </div>
    </div>
  );
}
