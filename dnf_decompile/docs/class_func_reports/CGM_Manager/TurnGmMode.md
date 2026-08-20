# TurnGmMode

`_ZN11CGM_Manager10TurnGmModeEj`

`CGM_Manager::TurnGmMode(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x0829917c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829917c  _ZN11CGM_Manager10TurnGmModeEj
#           CGM_Manager::TurnGmMode(unsigned int)
# range [0x0829917c, 0x08299275]
0829917c +0x00:  push   %ebp
0829917d +0x01:  mov    %esp,%ebp
0829917f +0x03:  push   %esi
08299180 +0x04:  push   %ebx
08299181 +0x05:  sub    $0x20,%esp
08299184 +0x08:  mov    0x8(%ebp),%eax
08299187 +0x0b:  add    $0x1c,%eax
0829918a +0x0e:  mov    %eax,0x4(%esp)
0829918e +0x12:  lea    -0x10(%ebp),%eax
08299191 +0x15:  mov    %eax,(%esp)
08299194 +0x18:  call   082b2d3c <_GLOBAL__I__ZN4CLog5this_E+0xf163>  ; global constructors keyed to CLog::this_+0xf163
08299199 +0x1d:  mov    0x8(%ebp),%edx
0829919c +0x20:  lea    -0x14(%ebp),%eax
0829919f +0x23:  lea    0xc(%ebp),%ecx
082991a2 +0x26:  mov    %ecx,0x8(%esp)
082991a6 +0x2a:  mov    %edx,0x4(%esp)
082991aa +0x2e:  mov    %eax,(%esp)
082991ad +0x31:  call   082b2d6e <_GLOBAL__I__ZN4CLog5this_E+0xf195>  ; global constructors keyed to CLog::this_+0xf195
082991b2 +0x36:  sub    $0x4,%esp
082991b5 +0x39:  mov    0x8(%ebp),%edx
082991b8 +0x3c:  lea    -0xc(%ebp),%eax
082991bb +0x3f:  mov    %edx,0x4(%esp)
082991bf +0x43:  mov    %eax,(%esp)
082991c2 +0x46:  call   082b2d9a <_GLOBAL__I__ZN4CLog5this_E+0xf1c1>  ; global constructors keyed to CLog::this_+0xf1c1
082991c7 +0x4b:  sub    $0x4,%esp
082991ca +0x4e:  lea    -0xc(%ebp),%eax
082991cd +0x51:  mov    %eax,0x4(%esp)
082991d1 +0x55:  lea    -0x14(%ebp),%eax
082991d4 +0x58:  mov    %eax,(%esp)
082991d7 +0x5b:  call   082b2dc0 <_GLOBAL__I__ZN4CLog5this_E+0xf1e7>  ; global constructors keyed to CLog::this_+0xf1e7
082991dc +0x60:  test   %al,%al
082991de +0x62:  je     082991e7 <+0x6b>
082991e0 +0x64:  mov    $0x0,%ebx
082991e5 +0x69:  jmp    0829925e <+0xe2>
082991e7 +0x6b:  mov    0x8(%ebp),%eax
082991ea +0x6e:  lea    0xc(%ebp),%edx
082991ed +0x71:  mov    %edx,0x4(%esp)
082991f1 +0x75:  mov    %eax,(%esp)
082991f4 +0x78:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
082991f9 +0x7d:  movzbl (%eax),%eax
082991fc +0x80:  test   %al,%al
082991fe +0x82:  je     08299217 <+0x9b>
08299200 +0x84:  mov    0x8(%ebp),%eax
08299203 +0x87:  lea    0xc(%ebp),%edx
08299206 +0x8a:  mov    %edx,0x4(%esp)
0829920a +0x8e:  mov    %eax,(%esp)
0829920d +0x91:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
08299212 +0x96:  movb   $0x0,(%eax)
08299215 +0x99:  jmp    0829922c <+0xb0>
08299217 +0x9b:  mov    0x8(%ebp),%eax
0829921a +0x9e:  lea    0xc(%ebp),%edx
0829921d +0xa1:  mov    %edx,0x4(%esp)
08299221 +0xa5:  mov    %eax,(%esp)
08299224 +0xa8:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
08299229 +0xad:  movb   $0x1,(%eax)
0829922c +0xb0:  mov    0x8(%ebp),%eax
0829922f +0xb3:  lea    0xc(%ebp),%edx
08299232 +0xb6:  mov    %edx,0x4(%esp)
08299236 +0xba:  mov    %eax,(%esp)
08299239 +0xbd:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
0829923e +0xc2:  movzbl (%eax),%ebx
08299241 +0xc5:  jmp    0829925e <+0xe2>
08299243 +0xc7:  mov    %edx,%ebx
08299245 +0xc9:  mov    %eax,%esi
08299247 +0xcb:  lea    -0x10(%ebp),%eax
0829924a +0xce:  mov    %eax,(%esp)
0829924d +0xd1:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
08299252 +0xd6:  mov    %esi,%eax
08299254 +0xd8:  mov    %ebx,%edx
08299256 +0xda:  mov    %eax,(%esp)
08299259 +0xdd:  call   08ae3750 <_Unwind_Resume>
0829925e +0xe2:  lea    -0x10(%ebp),%eax
08299261 +0xe5:  mov    %eax,(%esp)
08299264 +0xe8:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
08299269 +0xed:  mov    %ebx,%eax
0829926b +0xef:  lea    -0x8(%ebp),%esp
0829926e +0xf2:  add    $0x0,%esp
08299271 +0xf5:  pop    %ebx
08299272 +0xf6:  pop    %esi
08299273 +0xf7:  pop    %ebp
08299274 +0xf8:  ret
08299275 +0xf9:  nop
```

## 反编译 C

```c
// CGM_Manager::TurnGmMode @ 0x829917c

/* CGM_Manager::TurnGmMode(unsigned int) */

undefined1 CGM_Manager::TurnGmMode(uint param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  readGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  readGuard<rwLock>::readGuard(local_14,(rwLock *)(param_1 + 0x1c));
                    /* try { // try from 082991ad to 0829923d has its CatchHandler @ 08299243 */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    pcVar2 = (char *)std::
                     map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                     ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                                   *)param_1,(uint *)&stack0x00000008);
    if (*pcVar2 == '\0') {
      puVar3 = (undefined1 *)
               std::
               map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
               ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                             *)param_1,(uint *)&stack0x00000008);
      *puVar3 = 1;
    }
    else {
      puVar3 = (undefined1 *)
               std::
               map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
               ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                             *)param_1,(uint *)&stack0x00000008);
      *puVar3 = 0;
    }
    puVar3 = (undefined1 *)
             std::
             map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
             ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                           *)param_1,(uint *)&stack0x00000008);
    uVar4 = *puVar3;
  }
  else {
    uVar4 = 0;
  }
  readGuard<rwLock>::~readGuard(local_14);
  return uVar4;
}
```
