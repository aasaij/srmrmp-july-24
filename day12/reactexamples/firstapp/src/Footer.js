import React from "react";

const Footer = () => {
  const today = new Date();
  return (
    <footer className="bg-primary text-white text-center">
      <h3>Copyright &copy; {today.getFullYear} All rights reserved! </h3>
    </footer>
  );
};

export default Footer;
