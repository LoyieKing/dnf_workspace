# boost__gregorian

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## create_facet_def

```asm
// === 087dca40 boost::gregorian::create_facet_def  [0x087dca40-0x87dca9f] ===
 87dca40:	55                   	push   %ebp
 87dca41:	89 e5                	mov    %esp,%ebp
 87dca43:	83 ec 18             	sub    $0x18,%esp
 87dca46:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87dca4d:	e8 fe 79 f4 ff       	call   8724450 <_Znwj>
 87dca52:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87dca59:	c7 00 48 09 de 08    	movl   $0x8de0948,(%eax)
 87dca5f:	c7 40 08 80 07 de 08 	movl   $0x8de0780,0x8(%eax)
 87dca66:	c7 40 0c c0 07 de 08 	movl   $0x8de07c0,0xc(%eax)
 87dca6d:	c7 40 10 f8 07 de 08 	movl   $0x8de07f8,0x10(%eax)
 87dca74:	c7 40 14 10 08 de 08 	movl   $0x8de0810,0x14(%eax)
 87dca7b:	c7 40 18 2c 08 de 08 	movl   $0x8de082c,0x18(%eax)
 87dca82:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 87dca89:	c7 40 28 01 00 00 00 	movl   $0x1,0x28(%eax)
 87dca90:	c7 40 1c 2d 00 00 00 	movl   $0x2d,0x1c(%eax)
 87dca97:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87dca9e:	c9                   	leave
 87dca9f:	c3                   	ret

```

```c
// boost::gregorian::create_facet_def @ 0x87dca40

/* boost::gregorian::create_facet_def(wchar_t) */

void boost::gregorian::create_facet_def(wchar_t param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x2c);
  puVar1[1] = 0;
  *puVar1 = &PTR__all_date_names_put_08de0948;
  puVar1[2] = &w_short_month_names;
  puVar1[3] = &w_long_month_names;
  puVar1[4] = w_special_value_names;
  puVar1[5] = w_short_weekday_names;
  puVar1[6] = w_long_weekday_names;
  puVar1[9] = 0;
  puVar1[10] = 1;
  puVar1[7] = 0x2d;
  puVar1[8] = 0;
  return;
}

```

---

## create_facet_def_087dcaa0

```asm
// === 087dcaa0 boost::gregorian::create_facet_def  [0x087dcaa0-0x87dcaff] ===
 87dcaa0:	55                   	push   %ebp
 87dcaa1:	89 e5                	mov    %esp,%ebp
 87dcaa3:	83 ec 18             	sub    $0x18,%esp
 87dcaa6:	c7 04 24 28 00 00 00 	movl   $0x28,(%esp)
 87dcaad:	e8 9e 79 f4 ff       	call   8724450 <_Znwj>
 87dcab2:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87dcab9:	c7 00 e8 0b de 08    	movl   $0x8de0be8,(%eax)
 87dcabf:	c7 40 08 60 08 de 08 	movl   $0x8de0860,0x8(%eax)
 87dcac6:	c7 40 0c a0 08 de 08 	movl   $0x8de08a0,0xc(%eax)
 87dcacd:	c7 40 10 d8 08 de 08 	movl   $0x8de08d8,0x10(%eax)
 87dcad4:	c7 40 14 f0 08 de 08 	movl   $0x8de08f0,0x14(%eax)
 87dcadb:	c7 40 18 0c 09 de 08 	movl   $0x8de090c,0x18(%eax)
 87dcae2:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87dcae9:	c7 40 24 01 00 00 00 	movl   $0x1,0x24(%eax)
 87dcaf0:	c6 40 1c 2d          	movb   $0x2d,0x1c(%eax)
 87dcaf4:	c6 40 1d 00          	movb   $0x0,0x1d(%eax)
 87dcaf8:	c9                   	leave
 87dcaf9:	c3                   	ret
 87dcafa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// boost::gregorian::create_facet_def @ 0x87dcaa0

/* boost::gregorian::create_facet_def(char) */

void boost::gregorian::create_facet_def(char param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  puVar1[1] = 0;
  *puVar1 = &PTR__all_date_names_put_08de0be8;
  puVar1[2] = &short_month_names;
  puVar1[3] = &long_month_names;
  puVar1[4] = special_value_names;
  puVar1[5] = short_weekday_names;
  puVar1[6] = long_weekday_names;
  puVar1[8] = 0;
  puVar1[9] = 1;
  *(undefined1 *)(puVar1 + 7) = 0x2d;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  return;
}

```

---

## generate_locale

```asm
// === 087dcb00 boost::gregorian::generate_locale  [0x087dcb00-0x87dcb7f] ===
 87dcb00:	55                   	push   %ebp
 87dcb01:	89 e5                	mov    %esp,%ebp
 87dcb03:	53                   	push   %ebx
 87dcb04:	83 ec 14             	sub    $0x14,%esp
 87dcb07:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87dcb0a:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87dcb11:	e8 3a 79 f4 ff       	call   8724450 <_Znwj>
 87dcb16:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87dcb1d:	c7 00 48 09 de 08    	movl   $0x8de0948,(%eax)
 87dcb23:	c7 40 08 80 07 de 08 	movl   $0x8de0780,0x8(%eax)
 87dcb2a:	c7 40 0c c0 07 de 08 	movl   $0x8de07c0,0xc(%eax)
 87dcb31:	c7 40 10 f8 07 de 08 	movl   $0x8de07f8,0x10(%eax)
 87dcb38:	c7 40 14 10 08 de 08 	movl   $0x8de0810,0x14(%eax)
 87dcb3f:	c7 40 18 2c 08 de 08 	movl   $0x8de082c,0x18(%eax)
 87dcb46:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 87dcb4d:	c7 40 28 01 00 00 00 	movl   $0x1,0x28(%eax)
 87dcb54:	c7 40 1c 2d 00 00 00 	movl   $0x2d,0x1c(%eax)
 87dcb5b:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87dcb62:	89 44 24 08          	mov    %eax,0x8(%esp)
 87dcb66:	8b 45 0c             	mov    0xc(%ebp),%eax
 87dcb69:	89 1c 24             	mov    %ebx,(%esp)
 87dcb6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 87dcb70:	e8 6b 0b 00 00       	call   87dd6e0 <_ZNSt6localeC1IN5boost9date_time18all_date_names_putINS1_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEEEEERKS_PT_>
 87dcb75:	89 d8                	mov    %ebx,%eax
 87dcb77:	83 c4 14             	add    $0x14,%esp
 87dcb7a:	5b                   	pop    %ebx
 87dcb7b:	5d                   	pop    %ebp
 87dcb7c:	c2 04 00             	ret    $0x4
 87dcb7f:	90                   	nop

```

```c
// boost::gregorian::generate_locale @ 0x87dcb00

/* boost::gregorian::generate_locale(std::locale&, wchar_t) */

locale * boost::gregorian::generate_locale(locale *param_1,wchar_t param_2)

{
  all_date_names_put *paVar1;
  
  paVar1 = operator_new(0x2c);
  *(undefined4 *)(paVar1 + 4) = 0;
  *(undefined ***)paVar1 = &PTR__all_date_names_put_08de0948;
  *(undefined ***)(paVar1 + 8) = &w_short_month_names;
  *(undefined ***)(paVar1 + 0xc) = &w_long_month_names;
  *(undefined1 **)(paVar1 + 0x10) = w_special_value_names;
  *(undefined1 **)(paVar1 + 0x14) = w_short_weekday_names;
  *(undefined1 **)(paVar1 + 0x18) = w_long_weekday_names;
  *(undefined4 *)(paVar1 + 0x24) = 0;
  *(undefined4 *)(paVar1 + 0x28) = 1;
  *(undefined4 *)(paVar1 + 0x1c) = 0x2d;
  *(undefined4 *)(paVar1 + 0x20) = 0;
  std::locale::
  locale<boost::date_time::all_date_names_put<boost::gregorian::greg_facet_config,wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>>
            (param_1,(locale *)param_2,paVar1);
  return param_1;
}

```

---

## generate_locale_087dcb80

```asm
// === 087dcb80 boost::gregorian::generate_locale  [0x087dcb80-0x87dcbff] ===
 87dcb80:	55                   	push   %ebp
 87dcb81:	89 e5                	mov    %esp,%ebp
 87dcb83:	53                   	push   %ebx
 87dcb84:	83 ec 14             	sub    $0x14,%esp
 87dcb87:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87dcb8a:	c7 04 24 28 00 00 00 	movl   $0x28,(%esp)
 87dcb91:	e8 ba 78 f4 ff       	call   8724450 <_Znwj>
 87dcb96:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87dcb9d:	c7 00 e8 0b de 08    	movl   $0x8de0be8,(%eax)
 87dcba3:	c7 40 08 60 08 de 08 	movl   $0x8de0860,0x8(%eax)
 87dcbaa:	c7 40 0c a0 08 de 08 	movl   $0x8de08a0,0xc(%eax)
 87dcbb1:	c7 40 10 d8 08 de 08 	movl   $0x8de08d8,0x10(%eax)
 87dcbb8:	c7 40 14 f0 08 de 08 	movl   $0x8de08f0,0x14(%eax)
 87dcbbf:	c7 40 18 0c 09 de 08 	movl   $0x8de090c,0x18(%eax)
 87dcbc6:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87dcbcd:	c7 40 24 01 00 00 00 	movl   $0x1,0x24(%eax)
 87dcbd4:	c6 40 1c 2d          	movb   $0x2d,0x1c(%eax)
 87dcbd8:	c6 40 1d 00          	movb   $0x0,0x1d(%eax)
 87dcbdc:	89 44 24 08          	mov    %eax,0x8(%esp)
 87dcbe0:	8b 45 0c             	mov    0xc(%ebp),%eax
 87dcbe3:	89 1c 24             	mov    %ebx,(%esp)
 87dcbe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87dcbea:	e8 a1 0b 00 00       	call   87dd790 <_ZNSt6localeC1IN5boost9date_time18all_date_names_putINS1_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEEEEERKS_PT_>
 87dcbef:	89 d8                	mov    %ebx,%eax
 87dcbf1:	83 c4 14             	add    $0x14,%esp
 87dcbf4:	5b                   	pop    %ebx
 87dcbf5:	5d                   	pop    %ebp
 87dcbf6:	c2 04 00             	ret    $0x4
 87dcbf9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// boost::gregorian::generate_locale @ 0x87dcb80

/* boost::gregorian::generate_locale(std::locale&, char) */

locale * boost::gregorian::generate_locale(locale *param_1,char param_2)

{
  all_date_names_put *paVar1;
  undefined3 in_stack_00000009;
  
  paVar1 = operator_new(0x28);
  *(undefined4 *)(paVar1 + 4) = 0;
  *(undefined ***)paVar1 = &PTR__all_date_names_put_08de0be8;
  *(undefined ***)(paVar1 + 8) = &short_month_names;
  *(undefined ***)(paVar1 + 0xc) = &long_month_names;
  *(undefined1 **)(paVar1 + 0x10) = special_value_names;
  *(undefined1 **)(paVar1 + 0x14) = short_weekday_names;
  *(undefined1 **)(paVar1 + 0x18) = long_weekday_names;
  *(undefined4 *)(paVar1 + 0x20) = 0;
  *(undefined4 *)(paVar1 + 0x24) = 1;
  paVar1[0x1c] = (all_date_names_put)0x2d;
  paVar1[0x1d] = (all_date_names_put)0x0;
  std::locale::
  locale<boost::date_time::all_date_names_put<boost::gregorian::greg_facet_config,char,std::ostreambuf_iterator<char,std::char_traits<char>>>>
            (param_1,_param_2,paVar1);
  return param_1;
}

```

---

## special_value_from_string

```asm
// === 087dcc00 boost::gregorian::special_value_from_string  [0x087dcc00-0x87dcd5f] ===
 87dcc00:	55                   	push   %ebp
 87dcc01:	89 e5                	mov    %esp,%ebp
 87dcc03:	53                   	push   %ebx
 87dcc04:	83 ec 14             	sub    $0x14,%esp
 87dcc07:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87dcc0a:	c7 44 24 04 92 05 de 	movl   $0x8de0592,0x4(%esp)
 87dcc11:	08 
 87dcc12:	89 1c 24             	mov    %ebx,(%esp)
 87dcc15:	e8 16 9e f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcc1a:	31 d2                	xor    %edx,%edx
 87dcc1c:	85 c0                	test   %eax,%eax
 87dcc1e:	75 08                	jne    87dcc28 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x28>
 87dcc20:	89 d0                	mov    %edx,%eax
 87dcc22:	83 c4 14             	add    $0x14,%esp
 87dcc25:	5b                   	pop    %ebx
 87dcc26:	5d                   	pop    %ebp
 87dcc27:	c3                   	ret
 87dcc28:	c7 44 24 04 92 05 de 	movl   $0x8de0592,0x4(%esp)
 87dcc2f:	08 
 87dcc30:	89 1c 24             	mov    %ebx,(%esp)
 87dcc33:	e8 f8 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcc38:	31 d2                	xor    %edx,%edx
 87dcc3a:	85 c0                	test   %eax,%eax
 87dcc3c:	74 e2                	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dcc3e:	c7 44 24 04 a2 05 de 	movl   $0x8de05a2,0x4(%esp)
 87dcc45:	08 
 87dcc46:	89 1c 24             	mov    %ebx,(%esp)
 87dcc49:	e8 e2 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcc4e:	ba 01 00 00 00       	mov    $0x1,%edx
 87dcc53:	85 c0                	test   %eax,%eax
 87dcc55:	74 c9                	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dcc57:	c7 44 24 04 a2 05 de 	movl   $0x8de05a2,0x4(%esp)
 87dcc5e:	08 
 87dcc5f:	89 1c 24             	mov    %ebx,(%esp)
 87dcc62:	e8 c9 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcc67:	ba 01 00 00 00       	mov    $0x1,%edx
 87dcc6c:	85 c0                	test   %eax,%eax
 87dcc6e:	74 b0                	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dcc70:	c7 44 24 04 ac 05 de 	movl   $0x8de05ac,0x4(%esp)
 87dcc77:	08 
 87dcc78:	89 1c 24             	mov    %ebx,(%esp)
 87dcc7b:	e8 b0 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcc80:	ba 02 00 00 00       	mov    $0x2,%edx
 87dcc85:	85 c0                	test   %eax,%eax
 87dcc87:	74 97                	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dcc89:	c7 44 24 04 ac 05 de 	movl   $0x8de05ac,0x4(%esp)
 87dcc90:	08 
 87dcc91:	89 1c 24             	mov    %ebx,(%esp)
 87dcc94:	e8 97 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcc99:	ba 02 00 00 00       	mov    $0x2,%edx
 87dcc9e:	85 c0                	test   %eax,%eax
 87dcca0:	0f 84 7a ff ff ff    	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dcca6:	c7 44 24 04 b6 05 de 	movl   $0x8de05b6,0x4(%esp)
 87dccad:	08 
 87dccae:	89 1c 24             	mov    %ebx,(%esp)
 87dccb1:	e8 7a 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dccb6:	ba 03 00 00 00       	mov    $0x3,%edx
 87dccbb:	85 c0                	test   %eax,%eax
 87dccbd:	0f 84 5d ff ff ff    	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dccc3:	c7 44 24 04 b6 05 de 	movl   $0x8de05b6,0x4(%esp)
 87dccca:	08 
 87dcccb:	89 1c 24             	mov    %ebx,(%esp)
 87dccce:	e8 5d 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dccd3:	ba 03 00 00 00       	mov    $0x3,%edx
 87dccd8:	85 c0                	test   %eax,%eax
 87dccda:	0f 84 40 ff ff ff    	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dcce0:	c7 44 24 04 c4 05 de 	movl   $0x8de05c4,0x4(%esp)
 87dcce7:	08 
 87dcce8:	89 1c 24             	mov    %ebx,(%esp)
 87dcceb:	e8 40 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dccf0:	ba 04 00 00 00       	mov    $0x4,%edx
 87dccf5:	85 c0                	test   %eax,%eax
 87dccf7:	0f 84 23 ff ff ff    	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dccfd:	c7 44 24 04 c4 05 de 	movl   $0x8de05c4,0x4(%esp)
 87dcd04:	08 
 87dcd05:	89 1c 24             	mov    %ebx,(%esp)
 87dcd08:	e8 23 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcd0d:	ba 04 00 00 00       	mov    $0x4,%edx
 87dcd12:	85 c0                	test   %eax,%eax
 87dcd14:	0f 84 06 ff ff ff    	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dcd1a:	c7 44 24 04 d2 05 de 	movl   $0x8de05d2,0x4(%esp)
 87dcd21:	08 
 87dcd22:	89 1c 24             	mov    %ebx,(%esp)
 87dcd25:	e8 06 9d f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcd2a:	ba 05 00 00 00       	mov    $0x5,%edx
 87dcd2f:	85 c0                	test   %eax,%eax
 87dcd31:	0f 84 e9 fe ff ff    	je     87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>
 87dcd37:	c7 44 24 04 d2 05 de 	movl   $0x8de05d2,0x4(%esp)
 87dcd3e:	08 
 87dcd3f:	89 1c 24             	mov    %ebx,(%esp)
 87dcd42:	e8 e9 9c f2 ff       	call   8706a30 <_ZNKSs7compareEPKc>
 87dcd47:	ba 05 00 00 00       	mov    $0x5,%edx
 87dcd4c:	89 c1                	mov    %eax,%ecx
 87dcd4e:	b8 05 00 00 00       	mov    $0x5,%eax
 87dcd53:	85 c9                	test   %ecx,%ecx
 87dcd55:	0f 85 c7 fe ff ff    	jne    87dcc22 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x22>
 87dcd5b:	e9 c0 fe ff ff       	jmp    87dcc20 <_ZN5boost9gregorian25special_value_from_stringERKSs+0x20>

```

```c
// boost::gregorian::special_value_from_string @ 0x87dcc00

/* boost::gregorian::special_value_from_string(std::string const&) */

undefined4 boost::gregorian::special_value_from_string(string *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = std::string::compare(param_1,"not-a-date-time");
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = std::string::compare(param_1,"not-a-date-time");
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = std::string::compare(param_1,"-infinity");
      uVar2 = 1;
      if (iVar1 != 0) {
        iVar1 = std::string::compare(param_1,"-infinity");
        uVar2 = 1;
        if (iVar1 != 0) {
          iVar1 = std::string::compare(param_1,"+infinity");
          uVar2 = 2;
          if (iVar1 != 0) {
            iVar1 = std::string::compare(param_1,"+infinity");
            uVar2 = 2;
            if (iVar1 != 0) {
              iVar1 = std::string::compare(param_1,"min_date_time");
              uVar2 = 3;
              if (iVar1 != 0) {
                iVar1 = std::string::compare(param_1,"min_date_time");
                uVar2 = 3;
                if (iVar1 != 0) {
                  iVar1 = std::string::compare(param_1,"max_date_time");
                  uVar2 = 4;
                  if (iVar1 != 0) {
                    iVar1 = std::string::compare(param_1,"max_date_time");
                    uVar2 = 4;
                    if (iVar1 != 0) {
                      iVar1 = std::string::compare(param_1,"not_special");
                      uVar2 = 5;
                      if (iVar1 != 0) {
                        iVar1 = std::string::compare(param_1,"not_special");
                        uVar2 = 5;
                        if (iVar1 != 0) {
                          return 5;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

```

