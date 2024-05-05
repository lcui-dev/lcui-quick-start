module.exports = {
  plugins: [
    require("tailwindcss"),
    /** The CSS engine of LCUI does not support rem units, so we need to convert it to px units */
    require("@thedutchcoder/postcss-rem-to-px"),
  ],
};
