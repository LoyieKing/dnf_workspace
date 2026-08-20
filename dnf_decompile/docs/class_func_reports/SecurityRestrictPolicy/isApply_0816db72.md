# isApply

`_ZN22SecurityRestrictPolicy7isApplyEi`

`SecurityRestrictPolicy::isApply(int)`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816db72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816db72  _ZN22SecurityRestrictPolicy7isApplyEi
#           SecurityRestrictPolicy::isApply(int)
# range [0x0816db72, 0x0816dbe7]
0816db72 +0x00:  push   %ebp
0816db73 +0x01:  mov    %esp,%ebp
0816db75 +0x03:  sub    $0x28,%esp
0816db78 +0x06:  cmpl   $0x1,0xc(%ebp)
0816db7c +0x0a:  jg     0816db84 <+0x12>
0816db7e +0x0c:  cmpl   $0x0,0xc(%ebp)
0816db82 +0x10:  jns    0816dbc6 <+0x54>
0816db84 +0x12:  mov    0xc(%ebp),%eax
0816db87 +0x15:  mov    %eax,0x18(%esp)
0816db8b +0x19:  movl   $0x2,0x14(%esp)
0816db93 +0x21:  movl   $"[Taiwan, Restrict] Invalid SecurityRestrictPolicy Parameter. End:%d, Param:%d",0x10(%esp)
0816db9b +0x29:  movl   $0xcd,0xc(%esp)
0816dba3 +0x31:  movl   $&_ZZN22SecurityRestrictPolicy7isApplyEiE19__PRETTY_FUNCTION__,0x8(%esp)
0816dbab +0x39:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816dbb3 +0x41:  movl   $0x1,(%esp)
0816dbba +0x48:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816dbbf +0x4d:  mov    $0x0,%eax
0816dbc4 +0x52:  jmp    0816dbe5 <+0x73>
0816dbc6 +0x54:  mov    0xc(%ebp),%eax
0816dbc9 +0x57:  mov    0x8(%ebp),%edx
0816dbcc +0x5a:  add    $0xc,%edx
0816dbcf +0x5d:  mov    %eax,0x4(%esp)
0816dbd3 +0x61:  mov    %edx,(%esp)
0816dbd6 +0x64:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0816dbdb +0x69:  movzwl (%eax),%eax
0816dbde +0x6c:  cmp    $0x1,%ax
0816dbe2 +0x70:  sete   %al
0816dbe5 +0x73:  leave
0816dbe6 +0x74:  ret
0816dbe7 +0x75:  nop
```

## 反编译 C

```c
// SecurityRestrictPolicy::isApply @ 0x816db72

/* SecurityRestrictPolicy::isApply(int) */

undefined2 __thiscall SecurityRestrictPolicy::isApply(SecurityRestrictPolicy *this,int param_1)

{
  undefined2 uVar1;
  short *psVar2;
  
  if ((param_1 < 2) && (-1 < param_1)) {
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),param_1);
    uVar1 = CONCAT11((char)((ushort)*psVar2 >> 8),*psVar2 == 1);
  }
  else {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "virtual bool SecurityRestrictPolicy::isApply(int)",0xcd,
               "[Taiwan, Restrict] Invalid SecurityRestrictPolicy Parameter. End:%d, Param:%d",2,
               param_1);
    uVar1 = 0;
  }
  return uVar1;
}
```
