# getUserSlot

`_ZNK10BlueMarble11getUserSlotEP5CUser`

`BlueMarble::getUserSlot(CUser*) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d9074` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9074  _ZNK10BlueMarble11getUserSlotEP5CUser
#           BlueMarble::getUserSlot(CUser*) const
# range [0x080d9074, 0x080d90d9]
080d9074 +0x00:  push   %ebp
080d9075 +0x01:  mov    %esp,%ebp
080d9077 +0x03:  sub    $0x28,%esp
080d907a +0x06:  cmpl   $0x0,0xc(%ebp)
080d907e +0x0a:  jne    080d9087 <+0x13>
080d9080 +0x0c:  mov    $0xffffffff,%eax
080d9085 +0x11:  jmp    080d90d8 <+0x64>
080d9087 +0x13:  movl   $0x0,-0xc(%ebp)
080d908e +0x1a:  jmp    080d90c0 <+0x4c>
080d9090 +0x1c:  mov    -0xc(%ebp),%eax
080d9093 +0x1f:  mov    0x8(%ebp),%edx
080d9096 +0x22:  add    $0x4,%edx
080d9099 +0x25:  mov    %eax,0x4(%esp)
080d909d +0x29:  mov    %edx,(%esp)
080d90a0 +0x2c:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d90a5 +0x31:  mov    %eax,(%esp)
080d90a8 +0x34:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d90ad +0x39:  cmp    0xc(%ebp),%eax
080d90b0 +0x3c:  sete   %al
080d90b3 +0x3f:  test   %al,%al
080d90b5 +0x41:  je     080d90bc <+0x48>
080d90b7 +0x43:  mov    -0xc(%ebp),%eax
080d90ba +0x46:  jmp    080d90d8 <+0x64>
080d90bc +0x48:  addl   $0x1,-0xc(%ebp)
080d90c0 +0x4c:  mov    0x8(%ebp),%eax
080d90c3 +0x4f:  mov    0x38(%eax),%eax
080d90c6 +0x52:  mov    0x30(%eax),%eax
080d90c9 +0x55:  cmp    -0xc(%ebp),%eax
080d90cc +0x58:  setg   %al
080d90cf +0x5b:  test   %al,%al
080d90d1 +0x5d:  jne    080d9090 <+0x1c>
080d90d3 +0x5f:  mov    $0xffffffff,%eax
080d90d8 +0x64:  leave
080d90d9 +0x65:  ret
```

## 反编译 C

```c
// BlueMarble::getUserSlot @ 0x80d9074

/* BlueMarble::getUserSlot(CUser*) const */

uint __thiscall BlueMarble::getUserSlot(BlueMarble *this,CUser *param_1)

{
  BlueMarbleUserInfo *this_00;
  CUser *pCVar1;
  uint local_10;
  
  if (param_1 != (CUser *)0x0) {
    for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_10 = local_10 + 1) {
      this_00 = (BlueMarbleUserInfo *)
                std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                          ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                           (this + 4),local_10);
      pCVar1 = (CUser *)BlueMarbleUserInfo::getUser(this_00);
      if (pCVar1 == param_1) {
        return local_10;
      }
    }
  }
  return 0xffffffff;
}
```
