# generateCardData

`_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc`

`WongWork::CSecurityCardCenter::generateCardData(char*) const`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCardCenter` | `0x085fe1ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe1ba  _ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc
#           WongWork::CSecurityCardCenter::generateCardData(char*) const
# range [0x085fe1ba, 0x085fe2dd]
085fe1ba +0x000:  push   %ebp
085fe1bb +0x001:  mov    %esp,%ebp
085fe1bd +0x003:  push   %esi
085fe1be +0x004:  push   %ebx
085fe1bf +0x005:  sub    $0x40,%esp
085fe1c2 +0x008:  mov    0x8(%ebp),%eax
085fe1c5 +0x00b:  add    $0x47c,%eax
085fe1ca +0x010:  mov    %eax,0x4(%esp)
085fe1ce +0x014:  lea    -0x24(%ebp),%eax
085fe1d1 +0x017:  mov    %eax,(%esp)
085fe1d4 +0x01a:  call   085fe4f2 <_GLOBAL__I__ZN8WongWork13CSecurityCard4initEv+0x1c>  ; global constructors keyed to WongWork::CSecurityCard::init()+0x1c
085fe1d9 +0x01f:  movl   $0x26,-0x18(%ebp)
085fe1e0 +0x026:  movl   $0x0,-0x14(%ebp)
085fe1e7 +0x02d:  jmp    085fe29c <+0xe2>
085fe1ec +0x032:  movl   $0x0,-0x10(%ebp)
085fe1f3 +0x039:  lea    -0x24(%ebp),%eax
085fe1f6 +0x03c:  mov    %eax,(%esp)
085fe1f9 +0x03f:  call   084a6934 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x91c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x91c
085fe1fe +0x044:  mov    %eax,(%esp)
085fe201 +0x047:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085fe206 +0x04c:  mov    %eax,-0xc(%ebp)
085fe209 +0x04f:  lea    -0x28(%ebp),%eax
085fe20c +0x052:  lea    -0x24(%ebp),%edx
085fe20f +0x055:  mov    %edx,0x4(%esp)
085fe213 +0x059:  mov    %eax,(%esp)
085fe216 +0x05c:  call   084a711c <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x1104>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x1104
085fe21b +0x061:  sub    $0x4,%esp
085fe21e +0x064:  lea    -0x2c(%ebp),%eax
085fe221 +0x067:  lea    -0x24(%ebp),%edx
085fe224 +0x06a:  mov    %edx,0x4(%esp)
085fe228 +0x06e:  mov    %eax,(%esp)
085fe22b +0x071:  call   084a6de2 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0xdca>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0xdca
085fe230 +0x076:  sub    $0x4,%esp
085fe233 +0x079:  jmp    085fe282 <+0xc8>
085fe235 +0x07b:  mov    -0x10(%ebp),%eax
085fe238 +0x07e:  cmp    -0xc(%ebp),%eax
085fe23b +0x081:  jne    085fe273 <+0xb9>
085fe23d +0x083:  mov    -0x14(%ebp),%eax
085fe240 +0x086:  mov    %eax,%ebx
085fe242 +0x088:  add    0xc(%ebp),%ebx
085fe245 +0x08b:  lea    -0x28(%ebp),%eax
085fe248 +0x08e:  mov    %eax,(%esp)
085fe24b +0x091:  call   085fe5e4 <_GLOBAL__I__ZN8WongWork13CSecurityCard4initEv+0x10e>  ; global constructors keyed to WongWork::CSecurityCard::init()+0x10e
085fe250 +0x096:  movzbl (%eax),%eax
085fe253 +0x099:  mov    %al,(%ebx)
085fe255 +0x09b:  lea    -0x1c(%ebp),%eax
085fe258 +0x09e:  mov    -0x28(%ebp),%edx
085fe25b +0x0a1:  mov    %edx,0x8(%esp)
085fe25f +0x0a5:  lea    -0x24(%ebp),%edx
085fe262 +0x0a8:  mov    %edx,0x4(%esp)
085fe266 +0x0ac:  mov    %eax,(%esp)
085fe269 +0x0af:  call   085fe5f2 <_GLOBAL__I__ZN8WongWork13CSecurityCard4initEv+0x11c>  ; global constructors keyed to WongWork::CSecurityCard::init()+0x11c
085fe26e +0x0b4:  sub    $0x4,%esp
085fe271 +0x0b7:  jmp    085fe298 <+0xde>
085fe273 +0x0b9:  addl   $0x1,-0x10(%ebp)
085fe277 +0x0bd:  lea    -0x28(%ebp),%eax
085fe27a +0x0c0:  mov    %eax,(%esp)
085fe27d +0x0c3:  call   085fe5d0 <_GLOBAL__I__ZN8WongWork13CSecurityCard4initEv+0xfa>  ; global constructors keyed to WongWork::CSecurityCard::init()+0xfa
085fe282 +0x0c8:  lea    -0x2c(%ebp),%eax
085fe285 +0x0cb:  mov    %eax,0x4(%esp)
085fe289 +0x0cf:  lea    -0x28(%ebp),%eax
085fe28c +0x0d2:  mov    %eax,(%esp)
085fe28f +0x0d5:  call   085fe5bc <_GLOBAL__I__ZN8WongWork13CSecurityCard4initEv+0xe6>  ; global constructors keyed to WongWork::CSecurityCard::init()+0xe6
085fe294 +0x0da:  test   %al,%al
085fe296 +0x0dc:  jne    085fe235 <+0x7b>
085fe298 +0x0de:  addl   $0x1,-0x14(%ebp)
085fe29c +0x0e2:  mov    -0x14(%ebp),%eax
085fe29f +0x0e5:  cmp    $0x25,%eax
085fe2a2 +0x0e8:  setbe  %al
085fe2a5 +0x0eb:  test   %al,%al
085fe2a7 +0x0ed:  jne    085fe1ec <+0x32>
085fe2ad +0x0f3:  mov    0xc(%ebp),%ebx
085fe2b0 +0x0f6:  lea    -0x24(%ebp),%eax
085fe2b3 +0x0f9:  mov    %eax,(%esp)
085fe2b6 +0x0fc:  call   084a646a <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x452>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x452
085fe2bb +0x101:  mov    %ebx,%eax
085fe2bd +0x103:  lea    -0x8(%ebp),%esp
085fe2c0 +0x106:  add    $0x0,%esp
085fe2c3 +0x109:  pop    %ebx
085fe2c4 +0x10a:  pop    %esi
085fe2c5 +0x10b:  pop    %ebp
085fe2c6 +0x10c:  ret
085fe2c7 +0x10d:  mov    %edx,%ebx
085fe2c9 +0x10f:  mov    %eax,%esi
085fe2cb +0x111:  lea    -0x24(%ebp),%eax
085fe2ce +0x114:  mov    %eax,(%esp)
085fe2d1 +0x117:  call   084a646a <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x452>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x452
085fe2d6 +0x11c:  mov    %esi,%eax
085fe2d8 +0x11e:  mov    %ebx,%edx
085fe2da +0x120:  mov    %eax,(%esp)
085fe2dd +0x123:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// WongWork::CSecurityCardCenter::generateCardData @ 0x85fe1ba

/* WongWork::CSecurityCardCenter::generateCardData(char*) const */

char * __thiscall
WongWork::CSecurityCardCenter::generateCardData(CSecurityCardCenter *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  _List_iterator local_30 [4];
  undefined4 local_2c;
  list<unsigned_char,std::allocator<unsigned_char>> local_28 [8];
  undefined1 local_20 [4];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  std::list<unsigned_char,std::allocator<unsigned_char>>::list(local_28,(list *)(this + 0x47c));
  local_1c = 0x26;
  local_18 = 0;
  do {
    if (0x25 < local_18) {
      std::list<unsigned_char,std::allocator<unsigned_char>>::~list(local_28);
      return param_1;
    }
    local_14 = 0;
                    /* try { // try from 085fe1f9 to 085fe26d has its CatchHandler @ 085fe2c7 */
    iVar2 = std::list<unsigned_char,std::allocator<unsigned_char>>::size();
    local_10 = get_rand_int(iVar2);
    std::list<unsigned_char,std::allocator<unsigned_char>>::begin();
    std::list<unsigned_char,std::allocator<unsigned_char>>::end();
    while( true ) {
      cVar1 = std::_List_iterator<unsigned_char>::operator!=
                        ((_List_iterator<unsigned_char> *)&local_2c,local_30);
      if (cVar1 == '\0') break;
      if (local_14 == local_10) {
        pcVar4 = param_1 + local_18;
        pcVar3 = (char *)std::_List_iterator<unsigned_char>::operator*
                                   ((_List_iterator<unsigned_char> *)&local_2c);
        *pcVar4 = *pcVar3;
        std::list<unsigned_char,std::allocator<unsigned_char>>::erase(local_20,local_28,local_2c);
        break;
      }
      local_14 = local_14 + 1;
      std::_List_iterator<unsigned_char>::operator++((_List_iterator<unsigned_char> *)&local_2c);
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
