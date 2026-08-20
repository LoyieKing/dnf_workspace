# CObfuscator

`_ZN11CObfuscatorC1Ev`

`CObfuscator::CObfuscator()`

| 类 | 地址 |
|---|---|
| `CObfuscator` | `0x08585888` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585888  _ZN11CObfuscatorC1Ev
#           CObfuscator::CObfuscator()
# range [0x08585888, 0x085858d5]
08585888 +0x00:  push   %ebp
08585889 +0x01:  mov    %esp,%ebp
0858588b +0x03:  push   %esi
0858588c +0x04:  push   %ebx
0858588d +0x05:  sub    $0x20,%esp
08585890 +0x08:  mov    0x8(%ebp),%eax
08585893 +0x0b:  mov    %eax,(%esp)
08585896 +0x0e:  call   0831c09c <_ZN11CBitManagerC1Ev>  ; CBitManager::CBitManager()
0858589b +0x13:  lea    -0x18(%ebp),%eax
0858589e +0x16:  mov    %eax,(%esp)
085858a1 +0x19:  call   0831c09c <_ZN11CBitManagerC1Ev>  ; CBitManager::CBitManager()
085858a6 +0x1e:  lea    -0x18(%ebp),%eax
085858a9 +0x21:  mov    %eax,(%esp)
085858ac +0x24:  call   0831c0c8 <_ZN11CBitManagerD1Ev>  ; CBitManager::~CBitManager()
085858b1 +0x29:  jmp    085858ce <+0x46>
085858b3 +0x2b:  mov    %edx,%ebx
085858b5 +0x2d:  mov    %eax,%esi
085858b7 +0x2f:  mov    0x8(%ebp),%eax
085858ba +0x32:  mov    %eax,(%esp)
085858bd +0x35:  call   0831c0c8 <_ZN11CBitManagerD1Ev>  ; CBitManager::~CBitManager()
085858c2 +0x3a:  mov    %esi,%eax
085858c4 +0x3c:  mov    %ebx,%edx
085858c6 +0x3e:  mov    %eax,(%esp)
085858c9 +0x41:  call   08ae3750 <_Unwind_Resume>
085858ce +0x46:  add    $0x20,%esp
085858d1 +0x49:  pop    %ebx
085858d2 +0x4a:  pop    %esi
085858d3 +0x4b:  pop    %ebp
085858d4 +0x4c:  ret
085858d5 +0x4d:  nop
```

## 反编译 C

```c
// CObfuscator::CObfuscator @ 0x8585888

/* CObfuscator::CObfuscator() */

void __thiscall CObfuscator::CObfuscator(CObfuscator *this)

{
  CBitManager local_1c [16];
  
  CBitManager::CBitManager((CBitManager *)this);
                    /* try { // try from 085858a1 to 085858b0 has its CatchHandler @ 085858b3 */
  CBitManager::CBitManager(local_1c);
  CBitManager::~CBitManager(local_1c);
  return;
}
```
