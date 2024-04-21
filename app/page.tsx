import { useState, TextInput, Button } from '@lcui/react';
import styles from './page.module.css';

export default function App() {
  const [name, setName] = useState('LCUI');

  return (
    <div className={styles.app}>
      Hello, {name}!
      <TextInput placeholder="Please input..." />
      <Button onClick={() => setName("Test")}>Change</Button>
    </div>
  );
}
