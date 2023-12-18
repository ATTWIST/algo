package com.first.myapplication

import android.database.DatabaseUtils
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import androidx.databinding.DataBindingUtil
import com.first.myapplication.databinding.ActivityMainBinding
import kotlin.random.Random

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        binding = DataBindingUtil.setContentView(this,R.layout.activity_main)

        val diceI1 = binding.dice1
        val diceI2 = binding.dice2

        binding.diceStartBtn.setOnClickListener {

            Toast.makeText(this,"回します！",Toast.LENGTH_LONG).show()

            val num1 = Random.nextInt(1,6)
            val num2 = Random.nextInt(1,6)



            if(num1 == 1){
                diceI1.setImageResource(R.drawable.dice_1)
            }
            else if(num1 == 2){
                diceI1.setImageResource(R.drawable.dice_2)
            }
            else if(num1 == 3){
                diceI1.setImageResource(R.drawable.dice_3)
            }
            else if(num1 == 4){
                diceI1.setImageResource(R.drawable.dice_4)
            }
            else if(num1 == 5){
                diceI1.setImageResource(R.drawable.dice_5)
            }
            else {
                diceI1.setImageResource(R.drawable.dice_6)
            }

            if(num2 == 1){
                diceI2.setImageResource(R.drawable.dice_1)
            }
            else if(num2 == 2){
                diceI2.setImageResource(R.drawable.dice_2)
            }
            else if(num2 == 3){
                diceI2.setImageResource(R.drawable.dice_3)
            }
            else if(num2 == 4){
                diceI2.setImageResource(R.drawable.dice_4)
            }
            else if(num2 == 5){
                diceI2.setImageResource(R.drawable.dice_5)
            }
            else {
                diceI2.setImageResource(R.drawable.dice_6)
            }
        }

        }
    }
