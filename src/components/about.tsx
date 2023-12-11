import React, { Text, Link } from "@lcui/react";
import { ArrowRight } from "@lcui/react-icons";
import styles from "./about.module.scss";
import pkg from "../../package.json";

export default function About() {
  return (
    <div className={styles.about}>
      <div className={styles.item}>
        <div className={styles.icon} />
        <Text className={styles.name}>{pkg.name}</Text>
      </div>
      <div className={styles.item}>
        <div className={styles.meta}>
          <Text>{pkg.version}</Text>
          <Text $ref="lcui_version" />
        </div>
        <Text>{pkg.description}</Text>
      </div>
      <Link className={styles.item} href={pkg.homepage}>
        <Text>Visit homepage</Text>
        <ArrowRight />
      </Link>
      <Link className={styles.item} href={pkg.bugs.url}>
        <Text>Report an issue</Text>
        <ArrowRight />
      </Link>
    </div>
  );
}
