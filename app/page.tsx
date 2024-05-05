import { useState, TextInput, Button, useRef, Text } from "@lcui/react";
import { EmojiSparkle } from "@lcui/react-icons";

export default function App() {
  const inputRef = useRef();
  const [name, setName] = useState("LCUI");

  return (
    <div className="container">
      <div className="flex flex-col items-center pt-6">
        <EmojiSparkle fontSize={40} className="text-yellow-500" />
        <Text className="my-4 text-2xl text-center">Hello, {name}!</Text>
        <TextInput
          $ref={inputRef}
          className="mt-2"
          placeholder="Please input..."
        />
        <Button
          className="mt-2"
          onClick={() => setName(inputRef.current.value)}
        >
          Change
        </Button>
      </div>
    </div>
  );
}
