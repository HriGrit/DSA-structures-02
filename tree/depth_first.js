class Node{
    constructor(value){
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

const a = new Node('a');
const b = new Node('b');
const c = new Node('c');
const d = new Node('d');
const e = new Node('e');
const f = new Node('f');

a.left = b;
a.right = c;
b.left = d;
b.right = e;
c.right = f;

// InOrder
// Left, Root, Right
function inOrder(node){
    if(node){
        inOrder(node.left);
        console.log(node.value);
        inOrder(node.right);
    }
}

//PostOrder
// Left, Right, Root
function postOrder(node){
    if (node){
        postOrder(node.left);
        postOrder(node.right);
        console.log(node.value);
    }
}

// PreOrder
// Root, Left, Right
function preOrder(node){
    if(node){
        console.log(node.value);
        preOrder(node.left);
        preOrder(node.right);
    }
}

//Depth First Search
function depthFirstSearch(node){
    const stack = [node];
    while(stack.length > 0){
        const currentNode = stack.pop();
        console.log(currentNode.value);
        if(currentNode.right){              // Right first
            stack.push(currentNode.right);
        }
        if(currentNode.left){               // Left second
            stack.push(currentNode.left);
        }
    }
}

// Breadth First Search
function breadthFirstSearch(node){
    const queue = [node];
    while(queue.length > 0){
        const currentNode = queue.shift();
        console.log(currentNode.value);
        if(currentNode.left){           // Left first
            queue.push(currentNode.left);
        }
        if(currentNode.right){          // Right second
            queue.push(currentNode.right);
        }
    }
}

// main
console.log('InOrder');
inOrder(a);
console.log('PostOrder');
postOrder(a);
console.log('PreOrder');
preOrder(a);

console.log('Depth First Search');
depthFirstSearch(a);
console.log('Breadth First Search');
breadthFirstSearch(a);

    //         a   
    //     b       c
    // d       e       f