#include "stdafx.h"
#include<iostream>
#include<string>
#include<math.h>
#include<cctype>
#include<windows.h>

using namespace std;
class DES
{
	public:
		static string des_process(string message,string key,bool encrypt);
		static string CheckMessage(string message);
		static string MessageToHex (string message);

	private:
		static int bin_to_dec(string bin);
		static string dec_to_bin(int dec);
		static string process_string(string substring,int s[][4][16],int p);
		static string fifty_six_bit_key(string key,int pc1[8][7]);
		static string rol_keys(string key,int rotating_schedule[16],int i);
		static string fourty_eight_bit_key(string C,string D,int pc2[6][8]);
		static string initial_permuted_msg(string msg,int ip[8][8]);
		static string expanded_msg(string R,int ep[8][6]);
		static string xored_msg(string ep_msg,string fe_key);
		static string substitution_function(string xored_message,int sbox[][4][16]);
		static string permuted_message(string thirty_two_bit_msg,int pf[4][8]);
		static string inverse_ip_msg(string reversed_msg,int inv_ip[8][8]);
		static string hex_conversion(string de_msg,string conv_table[23],string hex[23]);
		static string intToHex(int a);
		
};