// const printButton =
// document.getElementById("printitem");
// printButton.addEventListener("click", onPrintItems);
// function onPrintItems(){
//     const list = document.getElementById("itemList");
//     const items = list.children;
//     for(const item of item){
//         console.log(item.textContent);


//     }
// }

// 1. Find the button element by its ID
const printButton = document.getElementById("printitem");

// 2. Attach the click event listener to the button
printButton.addEventListener("click", onPrintItems);

// 3. Define the function that runs when the button is clicked
function onPrintItems() {
    // Find the unordered list container by its ID
    const list = document.getElementById("itemList");
    
    // Get an HTMLCollection of all the child elements (the <li> items)
    const items = list.children;
    
    // Loop through each item in the collection
    // Note: 'items' is the collection, 'item' is the single element in the loop.
    for (const item of items) {
        // Print the text content of the current list item to the console
        console.log(item.textContent);
    }
}