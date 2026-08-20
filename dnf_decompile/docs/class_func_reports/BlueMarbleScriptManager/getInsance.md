# getInsance

`_ZN23BlueMarbleScriptManager10getInsanceEv`

`BlueMarbleScriptManager::getInsance()`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d60f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d60f2  _ZN23BlueMarbleScriptManager10getInsanceEv
#           BlueMarbleScriptManager::getInsance()
# range [0x088d60f2, 0x088d6149]
088d60f2 +0x00:  push   %ebp
088d60f3 +0x01:  mov    %esp,%ebp
088d60f5 +0x03:  push   %edi
088d60f6 +0x04:  push   %esi
088d60f7 +0x05:  push   %ebx
088d60f8 +0x06:  sub    $0x1c,%esp
088d60fb +0x09:  mov    &_ZZN23BlueMarbleScriptManager10getInsanceEvE8instance,%eax
088d6100 +0x0e:  test   %eax,%eax
088d6102 +0x10:  jne    088d613d <+0x4b>
088d6104 +0x12:  movl   $0xec,(%esp)
088d610b +0x19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088d6110 +0x1e:  mov    %eax,%ebx
088d6112 +0x20:  mov    %ebx,%eax
088d6114 +0x22:  mov    %eax,(%esp)
088d6117 +0x25:  call   088d614a <_ZN23BlueMarbleScriptManagerC1Ev>  ; BlueMarbleScriptManager::BlueMarbleScriptManager()
088d611c +0x2a:  jmp    088d6136 <+0x44>
088d611e +0x2c:  mov    %edx,%esi
088d6120 +0x2e:  mov    %eax,%edi
088d6122 +0x30:  mov    %ebx,(%esp)
088d6125 +0x33:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088d612a +0x38:  mov    %edi,%eax
088d612c +0x3a:  mov    %esi,%edx
088d612e +0x3c:  mov    %eax,(%esp)
088d6131 +0x3f:  call   08ae3750 <_Unwind_Resume>
088d6136 +0x44:  mov    %ebx,%eax
088d6138 +0x46:  mov    %eax,&_ZZN23BlueMarbleScriptManager10getInsanceEvE8instance
088d613d +0x4b:  mov    &_ZZN23BlueMarbleScriptManager10getInsanceEvE8instance,%eax
088d6142 +0x50:  add    $0x1c,%esp
088d6145 +0x53:  pop    %ebx
088d6146 +0x54:  pop    %esi
088d6147 +0x55:  pop    %edi
088d6148 +0x56:  pop    %ebp
088d6149 +0x57:  ret
```

## 反编译 C

```c
// BlueMarbleScriptManager::getInsance @ 0x88d60f2

/* BlueMarbleScriptManager::getInsance() */

BlueMarbleScriptManager * BlueMarbleScriptManager::getInsance(void)

{
  BlueMarbleScriptManager *this;
  
  if (getInsance()::instance == (BlueMarbleScriptManager *)0x0) {
    this = operator_new(0xec);
                    /* try { // try from 088d6117 to 088d611b has its CatchHandler @ 088d611e */
    BlueMarbleScriptManager(this);
    getInsance()::instance = this;
  }
  return getInsance()::instance;
}
```
