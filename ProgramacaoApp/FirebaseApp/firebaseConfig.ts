// Import the functions you need from the SDKs you need
import { initializeApp } from "firebase/app";
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

import { getFirestore } from "firebase/firestore";

// Your web app's Firebase configuration
const firebaseConfig = {
  apiKey: "AIzaSyBp4Z-yDhwspnLiTKXAyADmLRbAxlrxYE8",
  authDomain: "helloworld-f8106.firebaseapp.com",
  projectId: "helloworld-f8106",
  storageBucket: "helloworld-f8106.firebasestorage.app",
  messagingSenderId: "221388842588",
  appId: "1:221388842588:web:a14a7020a4c4432c69e899"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
export const db = getFirestore(app);
