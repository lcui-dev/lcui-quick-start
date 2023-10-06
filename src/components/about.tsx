import { Text, Link } from "@lcui/react";
import styles from "./about.module.scss";

export default function About() {
  return (
    <div className={styles.about}>
      <div className={styles.item}>
        <div className={styles.icon} />
        <Text $ref="name" className={styles.name} />
      </div>
      <div className={styles.item}>
        <div className={styles.meta}>
          <Text $ref="version" />
          <Text $ref="lcui_version" />
        </div>
        <Text $ref="description" />
      </div>
      <Link $ref="homepage" className={styles.item}>
        Visit homepage
      </Link>
      <Link $ref="bugs_url" className={styles.item}>
        Report an issue
      </Link>
    </div>
  );
}
