# setUserInfo

`_ZN10BlueMarble11setUserInfoEP23BlueMarbleScriptManager`

`BlueMarble::setUserInfo(BlueMarbleScriptManager*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8c3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8c3e  _ZN10BlueMarble11setUserInfoEP23BlueMarbleScriptManager
#           BlueMarble::setUserInfo(BlueMarbleScriptManager*)
# range [0x080d8c3e, 0x080d8ca7]
080d8c3e +0x00:  push   %ebp
080d8c3f +0x01:  mov    %esp,%ebp
080d8c41 +0x03:  push   %esi
080d8c42 +0x04:  push   %ebx
080d8c43 +0x05:  sub    $0x40,%esp
080d8c46 +0x08:  lea    -0x30(%ebp),%eax
080d8c49 +0x0b:  mov    %eax,(%esp)
080d8c4c +0x0e:  call   080d6a90 <_ZN18BlueMarbleUserInfoC1Ev>  ; BlueMarbleUserInfo::BlueMarbleUserInfo()
080d8c51 +0x13:  mov    0xc(%ebp),%eax
080d8c54 +0x16:  mov    %eax,0x4(%esp)
080d8c58 +0x1a:  lea    -0x30(%ebp),%eax
080d8c5b +0x1d:  mov    %eax,(%esp)
080d8c5e +0x20:  call   080d6b92 <_ZN18BlueMarbleUserInfo9setScriptEP23BlueMarbleScriptManager>  ; BlueMarbleUserInfo::setScript(BlueMarbleScriptManager*)
080d8c63 +0x25:  mov    0x8(%ebp),%eax
080d8c66 +0x28:  lea    0x4(%eax),%edx
080d8c69 +0x2b:  lea    -0x30(%ebp),%eax
080d8c6c +0x2e:  mov    %eax,0x4(%esp)
080d8c70 +0x32:  mov    %edx,(%esp)
080d8c73 +0x35:  call   080da804 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x9a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x9a1
080d8c78 +0x3a:  jmp    080d8c95 <+0x57>
080d8c7a +0x3c:  mov    %edx,%ebx
080d8c7c +0x3e:  mov    %eax,%esi
080d8c7e +0x40:  lea    -0x30(%ebp),%eax
080d8c81 +0x43:  mov    %eax,(%esp)
080d8c84 +0x46:  call   080d6b02 <_ZN18BlueMarbleUserInfoD1Ev>  ; BlueMarbleUserInfo::~BlueMarbleUserInfo()
080d8c89 +0x4b:  mov    %esi,%eax
080d8c8b +0x4d:  mov    %ebx,%edx
080d8c8d +0x4f:  mov    %eax,(%esp)
080d8c90 +0x52:  call   08ae3750 <_Unwind_Resume>
080d8c95 +0x57:  lea    -0x30(%ebp),%eax
080d8c98 +0x5a:  mov    %eax,(%esp)
080d8c9b +0x5d:  call   080d6b02 <_ZN18BlueMarbleUserInfoD1Ev>  ; BlueMarbleUserInfo::~BlueMarbleUserInfo()
080d8ca0 +0x62:  add    $0x40,%esp
080d8ca3 +0x65:  pop    %ebx
080d8ca4 +0x66:  pop    %esi
080d8ca5 +0x67:  pop    %ebp
080d8ca6 +0x68:  ret
080d8ca7 +0x69:  nop
```

## 反编译 C

```c
// BlueMarble::setUserInfo @ 0x80d8c3e

/* BlueMarble::setUserInfo(BlueMarbleScriptManager*) */

void __thiscall BlueMarble::setUserInfo(BlueMarble *this,BlueMarbleScriptManager *param_1)

{
  BlueMarbleUserInfo local_34 [40];
  
  BlueMarbleUserInfo::BlueMarbleUserInfo(local_34);
  BlueMarbleUserInfo::setScript(local_34,param_1);
                    /* try { // try from 080d8c73 to 080d8c77 has its CatchHandler @ 080d8c7a */
  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::push_back
            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),local_34);
  BlueMarbleUserInfo::~BlueMarbleUserInfo(local_34);
  return;
}
```
