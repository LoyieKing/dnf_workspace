# SetGmLevel

`_ZN11CGM_Manager10SetGmLevelEji`

`CGM_Manager::SetGmLevel(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CGM_Manager` | `0x0829932a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829932a  _ZN11CGM_Manager10SetGmLevelEji
#           CGM_Manager::SetGmLevel(unsigned int, int)
# range [0x0829932a, 0x082993d7]
0829932a +0x00:  push   %ebp
0829932b +0x01:  mov    %esp,%ebp
0829932d +0x03:  push   %esi
0829932e +0x04:  push   %ebx
0829932f +0x05:  sub    $0x20,%esp
08299332 +0x08:  mov    0x8(%ebp),%eax
08299335 +0x0b:  add    $0x1c,%eax
08299338 +0x0e:  mov    %eax,0x4(%esp)
0829933c +0x12:  lea    -0x10(%ebp),%eax
0829933f +0x15:  mov    %eax,(%esp)
08299342 +0x18:  call   082b2f36 <_GLOBAL__I__ZN4CLog5this_E+0xf35d>  ; global constructors keyed to CLog::this_+0xf35d
08299347 +0x1d:  mov    0x8(%ebp),%edx
0829934a +0x20:  lea    -0x14(%ebp),%eax
0829934d +0x23:  lea    0xc(%ebp),%ecx
08299350 +0x26:  mov    %ecx,0x8(%esp)
08299354 +0x2a:  mov    %edx,0x4(%esp)
08299358 +0x2e:  mov    %eax,(%esp)
0829935b +0x31:  call   082b2d6e <_GLOBAL__I__ZN4CLog5this_E+0xf195>  ; global constructors keyed to CLog::this_+0xf195
08299360 +0x36:  sub    $0x4,%esp
08299363 +0x39:  mov    0x8(%ebp),%edx
08299366 +0x3c:  lea    -0xc(%ebp),%eax
08299369 +0x3f:  mov    %edx,0x4(%esp)
0829936d +0x43:  mov    %eax,(%esp)
08299370 +0x46:  call   082b2d9a <_GLOBAL__I__ZN4CLog5this_E+0xf1c1>  ; global constructors keyed to CLog::this_+0xf1c1
08299375 +0x4b:  sub    $0x4,%esp
08299378 +0x4e:  lea    -0xc(%ebp),%eax
0829937b +0x51:  mov    %eax,0x4(%esp)
0829937f +0x55:  lea    -0x14(%ebp),%eax
08299382 +0x58:  mov    %eax,(%esp)
08299385 +0x5b:  call   082b2f68 <_GLOBAL__I__ZN4CLog5this_E+0xf38f>  ; global constructors keyed to CLog::this_+0xf38f
0829938a +0x60:  test   %al,%al
0829938c +0x62:  je     082993c3 <+0x99>
0829938e +0x64:  mov    0x8(%ebp),%eax
08299391 +0x67:  lea    0xc(%ebp),%edx
08299394 +0x6a:  mov    %edx,0x4(%esp)
08299398 +0x6e:  mov    %eax,(%esp)
0829939b +0x71:  call   082b2dea <_GLOBAL__I__ZN4CLog5this_E+0xf211>  ; global constructors keyed to CLog::this_+0xf211
082993a0 +0x76:  mov    0x10(%ebp),%edx
082993a3 +0x79:  mov    %edx,0x4(%eax)
082993a6 +0x7c:  jmp    082993c3 <+0x99>
082993a8 +0x7e:  mov    %edx,%ebx
082993aa +0x80:  mov    %eax,%esi
082993ac +0x82:  lea    -0x10(%ebp),%eax
082993af +0x85:  mov    %eax,(%esp)
082993b2 +0x88:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
082993b7 +0x8d:  mov    %esi,%eax
082993b9 +0x8f:  mov    %ebx,%edx
082993bb +0x91:  mov    %eax,(%esp)
082993be +0x94:  call   08ae3750 <_Unwind_Resume>
082993c3 +0x99:  lea    -0x10(%ebp),%eax
082993c6 +0x9c:  mov    %eax,(%esp)
082993c9 +0x9f:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
082993ce +0xa4:  lea    -0x8(%ebp),%esp
082993d1 +0xa7:  add    $0x0,%esp
082993d4 +0xaa:  pop    %ebx
082993d5 +0xab:  pop    %esi
082993d6 +0xac:  pop    %ebp
082993d7 +0xad:  ret
```

## 反编译 C

```c
// CGM_Manager::SetGmLevel @ 0x829932a

/* CGM_Manager::SetGmLevel(unsigned int, int) */

void __thiscall CGM_Manager::SetGmLevel(CGM_Manager *this,uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  writeGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  writeGuard<rwLock>::writeGuard(local_14,(rwLock *)(this + 0x1c));
                    /* try { // try from 0829935b to 0829939f has its CatchHandler @ 082993a8 */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::
            map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
            ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                          *)this,&param_1);
    *(int *)(iVar2 + 4) = param_2;
  }
  writeGuard<rwLock>::~writeGuard(local_14);
  return;
}
```
