# IsGm

`_ZN11CGM_Manager4IsGmEj`

`CGM_Manager::IsGm(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x0829948c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829948c  _ZN11CGM_Manager4IsGmEj
#           CGM_Manager::IsGm(unsigned int)
# range [0x0829948c, 0x0829952f]
0829948c +0x00:  push   %ebp
0829948d +0x01:  mov    %esp,%ebp
0829948f +0x03:  push   %esi
08299490 +0x04:  push   %ebx
08299491 +0x05:  sub    $0x20,%esp
08299494 +0x08:  mov    0x8(%ebp),%eax
08299497 +0x0b:  add    $0x1c,%eax
0829949a +0x0e:  mov    %eax,0x4(%esp)
0829949e +0x12:  lea    -0x10(%ebp),%eax
082994a1 +0x15:  mov    %eax,(%esp)
082994a4 +0x18:  call   082b2d3c <_GLOBAL__I__ZN4CLog5this_E+0xf163>  ; global constructors keyed to CLog::this_+0xf163
082994a9 +0x1d:  mov    0x8(%ebp),%edx
082994ac +0x20:  lea    -0x14(%ebp),%eax
082994af +0x23:  lea    0xc(%ebp),%ecx
082994b2 +0x26:  mov    %ecx,0x8(%esp)
082994b6 +0x2a:  mov    %edx,0x4(%esp)
082994ba +0x2e:  mov    %eax,(%esp)
082994bd +0x31:  call   082b2d6e <_GLOBAL__I__ZN4CLog5this_E+0xf195>  ; global constructors keyed to CLog::this_+0xf195
082994c2 +0x36:  sub    $0x4,%esp
082994c5 +0x39:  mov    0x8(%ebp),%edx
082994c8 +0x3c:  lea    -0xc(%ebp),%eax
082994cb +0x3f:  mov    %edx,0x4(%esp)
082994cf +0x43:  mov    %eax,(%esp)
082994d2 +0x46:  call   082b2d9a <_GLOBAL__I__ZN4CLog5this_E+0xf1c1>  ; global constructors keyed to CLog::this_+0xf1c1
082994d7 +0x4b:  sub    $0x4,%esp
082994da +0x4e:  lea    -0xc(%ebp),%eax
082994dd +0x51:  mov    %eax,0x4(%esp)
082994e1 +0x55:  lea    -0x14(%ebp),%eax
082994e4 +0x58:  mov    %eax,(%esp)
082994e7 +0x5b:  call   082b2dc0 <_GLOBAL__I__ZN4CLog5this_E+0xf1e7>  ; global constructors keyed to CLog::this_+0xf1e7
082994ec +0x60:  test   %al,%al
082994ee +0x62:  je     082994f7 <+0x6b>
082994f0 +0x64:  mov    $0x0,%ebx
082994f5 +0x69:  jmp    08299519 <+0x8d>
082994f7 +0x6b:  mov    $0x1,%ebx
082994fc +0x70:  jmp    08299519 <+0x8d>
082994fe +0x72:  mov    %edx,%ebx
08299500 +0x74:  mov    %eax,%esi
08299502 +0x76:  lea    -0x10(%ebp),%eax
08299505 +0x79:  mov    %eax,(%esp)
08299508 +0x7c:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
0829950d +0x81:  mov    %esi,%eax
0829950f +0x83:  mov    %ebx,%edx
08299511 +0x85:  mov    %eax,(%esp)
08299514 +0x88:  call   08ae3750 <_Unwind_Resume>
08299519 +0x8d:  lea    -0x10(%ebp),%eax
0829951c +0x90:  mov    %eax,(%esp)
0829951f +0x93:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
08299524 +0x98:  mov    %ebx,%eax
08299526 +0x9a:  lea    -0x8(%ebp),%esp
08299529 +0x9d:  add    $0x0,%esp
0829952c +0xa0:  pop    %ebx
0829952d +0xa1:  pop    %esi
0829952e +0xa2:  pop    %ebp
0829952f +0xa3:  ret
```

## 反编译 C

```c
// CGM_Manager::IsGm @ 0x829948c

/* CGM_Manager::IsGm(unsigned int) */

bool CGM_Manager::IsGm(uint param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  readGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  readGuard<rwLock>::readGuard(local_14,(rwLock *)(param_1 + 0x1c));
                    /* try { // try from 082994bd to 082994d6 has its CatchHandler @ 082994fe */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_10);
  readGuard<rwLock>::~readGuard(local_14);
  return cVar1 == '\0';
}
```
