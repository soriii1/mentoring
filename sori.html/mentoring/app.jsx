export default function App() {
  function c() {
    alert("엄");
  }
  return (
    <>
      <button onClick={c}>클릭</button>
      <button onClick={() => alert("아악")}>클릭</button>
    </>
  )
}