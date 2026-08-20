# SetAveragePrice

`_ZN20CAuctionAveragePrice15SetAveragePriceEihi`

`CAuctionAveragePrice::SetAveragePrice(int, unsigned char, int)`

| 类 | 地址 |
|---|---|
| `CAuctionAveragePrice` | `0x082f5c24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f5c24  _ZN20CAuctionAveragePrice15SetAveragePriceEihi
#           CAuctionAveragePrice::SetAveragePrice(int, unsigned char, int)
# range [0x082f5c24, 0x082f5da7]
082f5c24 +0x000:  push   %ebp
082f5c25 +0x001:  mov    %esp,%ebp
082f5c27 +0x003:  push   %esi
082f5c28 +0x004:  push   %ebx
082f5c29 +0x005:  sub    $0x70,%esp
082f5c2c +0x008:  mov    0x10(%ebp),%eax
082f5c2f +0x00b:  mov    %al,-0x5c(%ebp)
082f5c32 +0x00e:  mov    0x8(%ebp),%edx
082f5c35 +0x011:  lea    -0x38(%ebp),%eax
082f5c38 +0x014:  lea    0xc(%ebp),%ecx
082f5c3b +0x017:  mov    %ecx,0x8(%esp)
082f5c3f +0x01b:  mov    %edx,0x4(%esp)
082f5c43 +0x01f:  mov    %eax,(%esp)
082f5c46 +0x022:  call   082f5f84 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x81>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x81
082f5c4b +0x027:  sub    $0x4,%esp
082f5c4e +0x02a:  mov    0x8(%ebp),%edx
082f5c51 +0x02d:  lea    -0x34(%ebp),%eax
082f5c54 +0x030:  mov    %edx,0x4(%esp)
082f5c58 +0x034:  mov    %eax,(%esp)
082f5c5b +0x037:  call   082f5fb0 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0xad>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0xad
082f5c60 +0x03c:  sub    $0x4,%esp
082f5c63 +0x03f:  lea    -0x34(%ebp),%eax
082f5c66 +0x042:  mov    %eax,0x4(%esp)
082f5c6a +0x046:  lea    -0x38(%ebp),%eax
082f5c6d +0x049:  mov    %eax,(%esp)
082f5c70 +0x04c:  call   082f5fd6 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0xd3>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0xd3
082f5c75 +0x051:  test   %al,%al
082f5c77 +0x053:  je     082f5cb4 <+0x90>
082f5c79 +0x055:  lea    0x14(%ebp),%eax
082f5c7c +0x058:  mov    %eax,0x8(%esp)
082f5c80 +0x05c:  lea    -0x5c(%ebp),%eax
082f5c83 +0x05f:  mov    %eax,0x4(%esp)
082f5c87 +0x063:  lea    -0x40(%ebp),%eax
082f5c8a +0x066:  mov    %eax,(%esp)
082f5c8d +0x069:  call   082f5fea <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0xe7>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0xe7
082f5c92 +0x06e:  lea    -0x38(%ebp),%eax
082f5c95 +0x071:  mov    %eax,(%esp)
082f5c98 +0x074:  call   082f6018 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x115>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x115
082f5c9d +0x079:  lea    0x4(%eax),%edx
082f5ca0 +0x07c:  lea    -0x40(%ebp),%eax
082f5ca3 +0x07f:  mov    %eax,0x4(%esp)
082f5ca7 +0x083:  mov    %edx,(%esp)
082f5caa +0x086:  call   082f6026 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x123>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x123
082f5caf +0x08b:  jmp    082f5d9e <+0x17a>
082f5cb4 +0x090:  lea    -0x4c(%ebp),%eax
082f5cb7 +0x093:  mov    %eax,(%esp)
082f5cba +0x096:  call   082f609a <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x197>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x197
082f5cbf +0x09b:  lea    0x14(%ebp),%eax
082f5cc2 +0x09e:  mov    %eax,0x8(%esp)
082f5cc6 +0x0a2:  lea    -0x5c(%ebp),%eax
082f5cc9 +0x0a5:  mov    %eax,0x4(%esp)
082f5ccd +0x0a9:  lea    -0x54(%ebp),%eax
082f5cd0 +0x0ac:  mov    %eax,(%esp)
082f5cd3 +0x0af:  call   082f5fea <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0xe7>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0xe7
082f5cd8 +0x0b4:  lea    -0x54(%ebp),%eax
082f5cdb +0x0b7:  mov    %eax,0x4(%esp)
082f5cdf +0x0bb:  lea    -0x4c(%ebp),%eax
082f5ce2 +0x0be:  mov    %eax,(%esp)
082f5ce5 +0x0c1:  call   082f6026 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x123>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x123
082f5cea +0x0c6:  lea    -0x18(%ebp),%eax
082f5ced +0x0c9:  lea    -0x4c(%ebp),%edx
082f5cf0 +0x0cc:  mov    %edx,0x8(%esp)
082f5cf4 +0x0d0:  lea    0xc(%ebp),%edx
082f5cf7 +0x0d3:  mov    %edx,0x4(%esp)
082f5cfb +0x0d7:  mov    %eax,(%esp)
082f5cfe +0x0da:  call   082f60ad <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x1aa>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x1aa
082f5d03 +0x0df:  sub    $0x4,%esp
082f5d06 +0x0e2:  lea    -0x18(%ebp),%eax
082f5d09 +0x0e5:  mov    %eax,0x4(%esp)
082f5d0d +0x0e9:  lea    -0x28(%ebp),%eax
082f5d10 +0x0ec:  mov    %eax,(%esp)
082f5d13 +0x0ef:  call   082f60f2 <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x1ef>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x1ef
082f5d18 +0x0f4:  mov    0x8(%ebp),%edx
082f5d1b +0x0f7:  lea    -0x30(%ebp),%eax
082f5d1e +0x0fa:  lea    -0x28(%ebp),%ecx
082f5d21 +0x0fd:  mov    %ecx,0x8(%esp)
082f5d25 +0x101:  mov    %edx,0x4(%esp)
082f5d29 +0x105:  mov    %eax,(%esp)
082f5d2c +0x108:  call   082f612c <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x229>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x229
082f5d31 +0x10d:  sub    $0x4,%esp
082f5d34 +0x110:  lea    -0x28(%ebp),%eax
082f5d37 +0x113:  mov    %eax,(%esp)
082f5d3a +0x116:  call   082cf5dc <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x214d7>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x214d7
082f5d3f +0x11b:  jmp    082f5d6b <+0x147>
082f5d41 +0x11d:  mov    %edx,%ebx
082f5d43 +0x11f:  mov    %eax,%esi
082f5d45 +0x121:  lea    -0x28(%ebp),%eax
082f5d48 +0x124:  mov    %eax,(%esp)
082f5d4b +0x127:  call   082cf5dc <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x214d7>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x214d7
082f5d50 +0x12c:  mov    %esi,%eax
082f5d52 +0x12e:  mov    %ebx,%edx
082f5d54 +0x130:  jmp    082f5d56 <+0x132>
082f5d56 +0x132:  mov    %edx,%ebx
082f5d58 +0x134:  mov    %eax,%esi
082f5d5a +0x136:  lea    -0x18(%ebp),%eax
082f5d5d +0x139:  mov    %eax,(%esp)
082f5d60 +0x13c:  call   082f5f5a <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x57>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x57
082f5d65 +0x141:  mov    %esi,%eax
082f5d67 +0x143:  mov    %ebx,%edx
082f5d69 +0x145:  jmp    082f5d78 <+0x154>
082f5d6b +0x147:  lea    -0x18(%ebp),%eax
082f5d6e +0x14a:  mov    %eax,(%esp)
082f5d71 +0x14d:  call   082f5f5a <_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev+0x57>  ; global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()+0x57
082f5d76 +0x152:  jmp    082f5d93 <+0x16f>
082f5d78 +0x154:  mov    %edx,%ebx
082f5d7a +0x156:  mov    %eax,%esi
082f5d7c +0x158:  lea    -0x4c(%ebp),%eax
082f5d7f +0x15b:  mov    %eax,(%esp)
082f5d82 +0x15e:  call   082da750 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x4647>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x4647
082f5d87 +0x163:  mov    %esi,%eax
082f5d89 +0x165:  mov    %ebx,%edx
082f5d8b +0x167:  mov    %eax,(%esp)
082f5d8e +0x16a:  call   08ae3750 <_Unwind_Resume>
082f5d93 +0x16f:  lea    -0x4c(%ebp),%eax
082f5d96 +0x172:  mov    %eax,(%esp)
082f5d99 +0x175:  call   082da750 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x4647>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x4647
082f5d9e +0x17a:  lea    -0x8(%ebp),%esp
082f5da1 +0x17d:  add    $0x0,%esp
082f5da4 +0x180:  pop    %ebx
082f5da5 +0x181:  pop    %esi
082f5da6 +0x182:  pop    %ebp
082f5da7 +0x183:  ret
```

## 反编译 C

```c
// CAuctionAveragePrice::SetAveragePrice @ 0x82f5c24

/* CAuctionAveragePrice::SetAveragePrice(int, unsigned char, int) */

void CAuctionAveragePrice::SetAveragePrice(int param_1,uchar param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uchar local_60 [8];
  pair<unsigned_char,int> local_58 [8];
  vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>> local_50 [12];
  pair<unsigned_char,int> local_44 [8];
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
  local_3c [4];
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  local_38 [4];
  pair local_34 [8];
  pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
  local_2c [16];
  pair<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
  local_1c [16];
  
  local_60[0] = (uchar)param_3;
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::find((int *)local_3c);
  std::
  map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
  ::end(local_38);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
          ::operator!=(local_3c,(_Rb_tree_iterator *)local_38);
  if (cVar1 == '\0') {
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::vector
              (local_50);
                    /* try { // try from 082f5cd3 to 082f5d02 has its CatchHandler @ 082f5d78 */
    std::pair<unsigned_char,int>::pair<unsigned_char&,int&>
              (local_58,local_60,(int *)&stack0x00000010);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::
    push_back(local_50,local_58);
    std::
    make_pair<int&,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>&>
              ((int *)local_1c,(vector *)&param_2);
                    /* try { // try from 082f5d13 to 082f5d17 has its CatchHandler @ 082f5d56 */
    std::
    pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
    ::
    pair<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
              (local_2c,local_1c);
                    /* try { // try from 082f5d2c to 082f5d30 has its CatchHandler @ 082f5d41 */
    std::
    map<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>>
    ::insert(local_34);
                    /* try { // try from 082f5d3a to 082f5d3e has its CatchHandler @ 082f5d56 */
    std::
    pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
    ::~pair(local_2c);
                    /* try { // try from 082f5d71 to 082f5d75 has its CatchHandler @ 082f5d78 */
    std::
    pair<int,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>
    ::~pair(local_1c);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::~vector
              (local_50);
  }
  else {
    std::pair<unsigned_char,int>::pair<unsigned_char&,int&>
              (local_44,local_60,(int *)&stack0x00000010);
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>>>
            ::operator->(local_3c);
    std::vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>>::
    push_back((vector<std::pair<unsigned_char,int>,std::allocator<std::pair<unsigned_char,int>>> *)
              (iVar2 + 4),local_44);
  }
  return;
}
```
