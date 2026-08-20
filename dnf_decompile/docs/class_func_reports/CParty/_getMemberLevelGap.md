# _getMemberLevelGap

`_ZN6CParty18_getMemberLevelGapEv`

`CParty::_getMemberLevelGap()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b4ae2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b4ae2  _ZN6CParty18_getMemberLevelGapEv
#           CParty::_getMemberLevelGap()
# range [0x085b4ae2, 0x085b4bdd]
085b4ae2 +0x00:  push   %ebp
085b4ae3 +0x01:  mov    %esp,%ebp
085b4ae5 +0x03:  sub    $0x38,%esp
085b4ae8 +0x06:  mov    0x8(%ebp),%eax
085b4aeb +0x09:  mov    0x298(%eax),%eax
085b4af1 +0x0f:  cmp    $0xffffffff,%eax
085b4af4 +0x12:  jne    085b4bd3 <+0xf1>
085b4afa +0x18:  movl   $0x63,-0x18(%ebp)
085b4b01 +0x1f:  movl   $0x0,-0x1c(%ebp)
085b4b08 +0x26:  movl   $0x0,-0xc(%ebp)
085b4b0f +0x2d:  jmp    085b4ba6 <+0xc4>
085b4b14 +0x32:  mov    -0xc(%ebp),%eax
085b4b17 +0x35:  mov    %eax,0x4(%esp)
085b4b1b +0x39:  mov    0x8(%ebp),%eax
085b4b1e +0x3c:  mov    %eax,(%esp)
085b4b21 +0x3f:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b4b26 +0x44:  xor    $0x1,%eax
085b4b29 +0x47:  test   %al,%al
085b4b2b +0x49:  jne    085b4ba1 <+0xbf>
085b4b2d +0x4b:  mov    -0xc(%ebp),%edx
085b4b30 +0x4e:  mov    0x8(%ebp),%ecx
085b4b33 +0x51:  mov    %edx,%eax
085b4b35 +0x53:  add    %eax,%eax
085b4b37 +0x55:  add    %edx,%eax
085b4b39 +0x57:  shl    $0x3,%eax
085b4b3c +0x5a:  lea    (%ecx,%eax,1),%eax
085b4b3f +0x5d:  add    $0x78,%eax
085b4b42 +0x60:  mov    (%eax),%eax
085b4b44 +0x62:  mov    %eax,(%esp)
085b4b47 +0x65:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b4b4c +0x6a:  mov    %eax,-0x14(%ebp)
085b4b4f +0x6d:  lea    -0x14(%ebp),%eax
085b4b52 +0x70:  mov    %eax,0x4(%esp)
085b4b56 +0x74:  lea    -0x18(%ebp),%eax
085b4b59 +0x77:  mov    %eax,(%esp)
085b4b5c +0x7a:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
085b4b61 +0x7f:  mov    (%eax),%eax
085b4b63 +0x81:  mov    %eax,-0x18(%ebp)
085b4b66 +0x84:  mov    -0xc(%ebp),%edx
085b4b69 +0x87:  mov    0x8(%ebp),%ecx
085b4b6c +0x8a:  mov    %edx,%eax
085b4b6e +0x8c:  add    %eax,%eax
085b4b70 +0x8e:  add    %edx,%eax
085b4b72 +0x90:  shl    $0x3,%eax
085b4b75 +0x93:  lea    (%ecx,%eax,1),%eax
085b4b78 +0x96:  add    $0x78,%eax
085b4b7b +0x99:  mov    (%eax),%eax
085b4b7d +0x9b:  mov    %eax,(%esp)
085b4b80 +0x9e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b4b85 +0xa3:  mov    %eax,-0x10(%ebp)
085b4b88 +0xa6:  lea    -0x10(%ebp),%eax
085b4b8b +0xa9:  mov    %eax,0x4(%esp)
085b4b8f +0xad:  lea    -0x1c(%ebp),%eax
085b4b92 +0xb0:  mov    %eax,(%esp)
085b4b95 +0xb3:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
085b4b9a +0xb8:  mov    (%eax),%eax
085b4b9c +0xba:  mov    %eax,-0x1c(%ebp)
085b4b9f +0xbd:  jmp    085b4ba2 <+0xc0>
085b4ba1 +0xbf:  nop
085b4ba2 +0xc0:  addl   $0x1,-0xc(%ebp)
085b4ba6 +0xc4:  cmpl   $0x3,-0xc(%ebp)
085b4baa +0xc8:  setle  %al
085b4bad +0xcb:  test   %al,%al
085b4baf +0xcd:  jne    085b4b14 <+0x32>
085b4bb5 +0xd3:  mov    -0x1c(%ebp),%edx
085b4bb8 +0xd6:  mov    -0x18(%ebp),%eax
085b4bbb +0xd9:  mov    %edx,%ecx
085b4bbd +0xdb:  sub    %eax,%ecx
085b4bbf +0xdd:  mov    %ecx,%eax
085b4bc1 +0xdf:  mov    %eax,%edx
085b4bc3 +0xe1:  sar    $0x1f,%edx
085b4bc6 +0xe4:  xor    %edx,%eax
085b4bc8 +0xe6:  sub    %edx,%eax
085b4bca +0xe8:  mov    0x8(%ebp),%edx
085b4bcd +0xeb:  mov    %eax,0x298(%edx)
085b4bd3 +0xf1:  mov    0x8(%ebp),%eax
085b4bd6 +0xf4:  mov    0x298(%eax),%eax
085b4bdc +0xfa:  leave
085b4bdd +0xfb:  ret
```

## 反编译 C

```c
// CParty::_getMemberLevelGap @ 0x85b4ae2

/* CParty::_getMemberLevelGap() */

undefined4 __thiscall CParty::_getMemberLevelGap(CParty *this)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x298) == -1) {
    local_1c = 99;
    local_20 = 0;
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar1 = _checkValidUser(this,local_10);
      if (cVar1 == '\x01') {
        local_18 = CUserCharacInfo::get_charac_level
                             (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
        piVar2 = std::min<int>(&local_1c,&local_18);
        local_1c = *piVar2;
        local_14 = CUserCharacInfo::get_charac_level
                             (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
        piVar2 = std::max<int>(&local_20,&local_14);
        local_20 = *piVar2;
      }
    }
    uVar3 = local_20 - local_1c >> 0x1f;
    *(uint *)(this + 0x298) = (local_20 - local_1c ^ uVar3) - uVar3;
  }
  return *(undefined4 *)(this + 0x298);
}
```
