import { Text, TextInput, Button } from "@lcui/react";
import About from "../components/about";

export default function Home() {
  return (
    <div className="container">
      <About />
      <div className="input-group">
        <Text>Enter a message and save it.</Text>
        <TextInput $ref="input_message" placeholder="eg: hello, world!" />
        <Button $ref="btn_save_message">Save</Button>
        <Text $ref="feedback" className="feedback">
          Message has been saved!
        </Text>
      </div>
    </div>
  );
}
