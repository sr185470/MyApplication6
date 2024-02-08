package com.example.myapplication

import android.os.Bundle
import androidx.activity.ComponentActivity
import java.util.*
//import kotlinx.androidx.synthetic.main.activity_main.*
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import com.example.myapplication.ui.theme.MyApplicationTheme

class MainActivity : ComponentActivity() {

    external fun nativeFunction(): String
    // external fun nativeFunction1(): Int

    companion object {
        init {
            System.loadLibrary("native-lib")
        }
    }
   // @Composable
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
       setContent {
           MyApplicationTheme {
           Text(text = nativeFunction())
//               val squares:IntArray= intArrayOf(nativeFunction1())
               //val squares = arrayOf<Int>(nativeFunction1(
             //  Text(text=squares.contentToString())

                   }
               }

           }

       }









