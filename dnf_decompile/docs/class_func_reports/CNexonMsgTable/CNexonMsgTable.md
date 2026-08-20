# CNexonMsgTable

`_ZN14CNexonMsgTableC1Ev`

`CNexonMsgTable::CNexonMsgTable()`

| 类 | 地址 |
|---|---|
| `CNexonMsgTable` | `0x0858001c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858001c  _ZN14CNexonMsgTableC1Ev
#           CNexonMsgTable::CNexonMsgTable()
# range [0x0858001c, 0x085800f7]
0858001c +0x00:  push   %ebp
0858001d +0x01:  mov    %esp,%ebp
0858001f +0x03:  push   %esi
08580020 +0x04:  push   %ebx
08580021 +0x05:  sub    $0x30,%esp
08580024 +0x08:  mov    0x8(%ebp),%eax
08580027 +0x0b:  mov    %eax,(%esp)
0858002a +0x0e:  call   080c6bea <_GLOBAL__I_g_ServerString_+0x155>  ; global constructors keyed to g_ServerString_+0x155
0858002f +0x13:  movl   $0x0,-0xc(%ebp)
08580036 +0x1a:  jmp    085800bf <+0xa3>
0858003b +0x1f:  mov    -0xc(%ebp),%eax
0858003e +0x22:  shl    $0x3,%eax
08580041 +0x25:  add    $&msgs,%eax
08580046 +0x2a:  lea    0x4(%eax),%ecx
08580049 +0x2d:  mov    -0xc(%ebp),%eax
0858004c +0x30:  shl    $0x3,%eax
0858004f +0x33:  lea    &msgs(%eax),%edx
08580055 +0x39:  lea    -0x14(%ebp),%eax
08580058 +0x3c:  mov    %ecx,0x8(%esp)
0858005c +0x40:  mov    %edx,0x4(%esp)
08580060 +0x44:  mov    %eax,(%esp)
08580063 +0x47:  call   085801fd <_GLOBAL__I_msgs+0x1c>  ; global constructors keyed to msgs+0x1c
08580068 +0x4c:  sub    $0x4,%esp
0858006b +0x4f:  lea    -0x14(%ebp),%eax
0858006e +0x52:  mov    %eax,0x4(%esp)
08580072 +0x56:  lea    -0x1c(%ebp),%eax
08580075 +0x59:  mov    %eax,(%esp)
08580078 +0x5c:  call   0858023c <_GLOBAL__I_msgs+0x5b>  ; global constructors keyed to msgs+0x5b
0858007d +0x61:  mov    0x8(%ebp),%edx
08580080 +0x64:  lea    -0x24(%ebp),%eax
08580083 +0x67:  lea    -0x1c(%ebp),%ecx
08580086 +0x6a:  mov    %ecx,0x8(%esp)
0858008a +0x6e:  mov    %edx,0x4(%esp)
0858008e +0x72:  mov    %eax,(%esp)
08580091 +0x75:  call   080c6dee <_GLOBAL__I_g_ServerString_+0x359>  ; global constructors keyed to g_ServerString_+0x359
08580096 +0x7a:  sub    $0x4,%esp
08580099 +0x7d:  lea    -0x1c(%ebp),%eax
0858009c +0x80:  mov    %eax,(%esp)
0858009f +0x83:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
085800a4 +0x88:  jmp    085800bb <+0x9f>
085800a6 +0x8a:  mov    %edx,%ebx
085800a8 +0x8c:  mov    %eax,%esi
085800aa +0x8e:  lea    -0x1c(%ebp),%eax
085800ad +0x91:  mov    %eax,(%esp)
085800b0 +0x94:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
085800b5 +0x99:  mov    %esi,%eax
085800b7 +0x9b:  mov    %ebx,%edx
085800b9 +0x9d:  jmp    085800d2 <+0xb6>
085800bb +0x9f:  addl   $0x1,-0xc(%ebp)
085800bf +0xa3:  mov    -0xc(%ebp),%eax
085800c2 +0xa6:  cmp    $0x1b,%eax
085800c5 +0xa9:  setbe  %al
085800c8 +0xac:  test   %al,%al
085800ca +0xae:  jne    0858003b <+0x1f>
085800d0 +0xb4:  jmp    085800ed <+0xd1>
085800d2 +0xb6:  mov    %edx,%ebx
085800d4 +0xb8:  mov    %eax,%esi
085800d6 +0xba:  mov    0x8(%ebp),%eax
085800d9 +0xbd:  mov    %eax,(%esp)
085800dc +0xc0:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
085800e1 +0xc5:  mov    %esi,%eax
085800e3 +0xc7:  mov    %ebx,%edx
085800e5 +0xc9:  mov    %eax,(%esp)
085800e8 +0xcc:  call   08ae3750 <_Unwind_Resume>
085800ed +0xd1:  lea    -0x8(%ebp),%esp
085800f0 +0xd4:  add    $0x0,%esp
085800f3 +0xd7:  pop    %ebx
085800f4 +0xd8:  pop    %esi
085800f5 +0xd9:  pop    %ebp
085800f6 +0xda:  ret
085800f7 +0xdb:  nop
```

## 反编译 C

```c
// CNexonMsgTable::CNexonMsgTable @ 0x858001c

/* CNexonMsgTable::CNexonMsgTable() */

void __thiscall CNexonMsgTable::CNexonMsgTable(CNexonMsgTable *this)

{
  pair local_28 [8];
  pair<int_const,std::string> local_20 [8];
  int local_18 [2];
  uint local_10;
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )this);
  for (local_10 = 0; local_10 < 0x1c; local_10 = local_10 + 1) {
                    /* try { // try from 08580063 to 0858007c has its CatchHandler @ 085800d2 */
    std::make_pair<int&,char_const*&>(local_18,(char **)(msgs + local_10 * 8));
    std::pair<int_const,std::string>::pair<int,char_const*>(local_20,(pair *)local_18);
                    /* try { // try from 08580091 to 08580095 has its CatchHandler @ 085800a6 */
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
    insert(local_28);
                    /* try { // try from 0858009f to 085800a3 has its CatchHandler @ 085800d2 */
    std::pair<int_const,std::string>::~pair(local_20);
  }
  return;
}
```
