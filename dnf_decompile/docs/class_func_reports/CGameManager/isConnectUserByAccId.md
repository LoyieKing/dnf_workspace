# isConnectUserByAccId

`_ZN12CGameManager20isConnectUserByAccIdEj`

`CGameManager::isConnectUserByAccId(unsigned int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294ad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294ad0  _ZN12CGameManager20isConnectUserByAccIdEj
#           CGameManager::isConnectUserByAccId(unsigned int)
# range [0x08294ad0, 0x08294b2b]
08294ad0 +0x00:  push   %ebp
08294ad1 +0x01:  mov    %esp,%ebp
08294ad3 +0x03:  sub    $0x28,%esp
08294ad6 +0x06:  movl   $0x0,-0x10(%ebp)
08294add +0x0d:  jmp    08294b17 <+0x47>
08294adf +0x0f:  mov    0x8(%ebp),%eax
08294ae2 +0x12:  lea    0x4c(%eax),%edx
08294ae5 +0x15:  mov    -0x10(%ebp),%eax
08294ae8 +0x18:  mov    %eax,0x4(%esp)
08294aec +0x1c:  mov    %edx,(%esp)
08294aef +0x1f:  call   082b050c <_GLOBAL__I__ZN4CLog5this_E+0xc933>  ; global constructors keyed to CLog::this_+0xc933
08294af4 +0x24:  mov    %eax,-0xc(%ebp)
08294af7 +0x27:  mov    -0xc(%ebp),%eax
08294afa +0x2a:  mov    %eax,(%esp)
08294afd +0x2d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08294b02 +0x32:  cmp    0xc(%ebp),%eax
08294b05 +0x35:  sete   %al
08294b08 +0x38:  test   %al,%al
08294b0a +0x3a:  je     08294b13 <+0x43>
08294b0c +0x3c:  mov    $0x1,%eax
08294b11 +0x41:  jmp    08294b2a <+0x5a>
08294b13 +0x43:  addl   $0x1,-0x10(%ebp)
08294b17 +0x47:  cmpl   $0x257,-0x10(%ebp)
08294b1e +0x4e:  setle  %al
08294b21 +0x51:  test   %al,%al
08294b23 +0x53:  jne    08294adf <+0xf>
08294b25 +0x55:  mov    $0x0,%eax
08294b2a +0x5a:  leave
08294b2b +0x5b:  ret
```

## 反编译 C

```c
// CGameManager::isConnectUserByAccId @ 0x8294ad0

/* CGameManager::isConnectUserByAccId(unsigned int) */

undefined4 __thiscall CGameManager::isConnectUserByAccId(CGameManager *this,uint param_1)

{
  CUser *this_00;
  uint uVar1;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (599 < local_14) {
      return 0;
    }
    this_00 = (CUser *)StaticPool<CUser,600>::Get((StaticPool<CUser,600> *)(this + 0x4c),local_14);
    uVar1 = CUser::get_acc_id(this_00);
    if (uVar1 == param_1) break;
    local_14 = local_14 + 1;
  }
  return 1;
}
```
