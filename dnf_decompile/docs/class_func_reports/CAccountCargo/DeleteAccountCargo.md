# DeleteAccountCargo

`_ZN13CAccountCargo18DeleteAccountCargoEP5CUser`

`CAccountCargo::DeleteAccountCargo(CUser*)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828b4ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828b4ec  _ZN13CAccountCargo18DeleteAccountCargoEP5CUser
#           CAccountCargo::DeleteAccountCargo(CUser*)
# range [0x0828b4ec, 0x0828b54a]
0828b4ec +0x00:  push   %ebp
0828b4ed +0x01:  mov    %esp,%ebp
0828b4ef +0x03:  push   %ebx
0828b4f0 +0x04:  sub    $0x24,%esp
0828b4f3 +0x07:  mov    0x8(%ebp),%eax
0828b4f6 +0x0a:  mov    %eax,(%esp)
0828b4f9 +0x0d:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0828b4fe +0x12:  xor    $0x1,%eax
0828b501 +0x15:  test   %al,%al
0828b503 +0x17:  jne    0828b544 <+0x58>
0828b505 +0x19:  mov    0x8(%ebp),%eax
0828b508 +0x1c:  mov    %eax,(%esp)
0828b50b +0x1f:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
0828b510 +0x24:  mov    %eax,-0xc(%ebp)
0828b513 +0x27:  mov    0x8(%ebp),%eax
0828b516 +0x2a:  mov    %eax,(%esp)
0828b519 +0x2d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0828b51e +0x32:  mov    %eax,%ebx
0828b520 +0x34:  mov    0x8(%ebp),%eax
0828b523 +0x37:  mov    %eax,(%esp)
0828b526 +0x3a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0828b52b +0x3f:  mov    %ebx,0x4(%esp)
0828b52f +0x43:  mov    %eax,(%esp)
0828b532 +0x46:  call   0843b2e0 <_ZN21DB_DeleteAccountCargo11makeRequestEij>  ; DB_DeleteAccountCargo::makeRequest(int, unsigned int)
0828b537 +0x4b:  mov    0x8(%ebp),%eax
0828b53a +0x4e:  mov    %eax,(%esp)
0828b53d +0x51:  call   0828b5c6 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x3b>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x3b
0828b542 +0x56:  jmp    0828b545 <+0x59>
0828b544 +0x58:  nop
0828b545 +0x59:  add    $0x24,%esp
0828b548 +0x5c:  pop    %ebx
0828b549 +0x5d:  pop    %ebp
0828b54a +0x5e:  ret
```

## 反编译 C

```c
// CAccountCargo::DeleteAccountCargo @ 0x828b4ec

/* CAccountCargo::DeleteAccountCargo(CUser*) */

void CAccountCargo::DeleteAccountCargo(CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = CUser::IsExistAccountCargo(param_1);
  if (cVar1 == '\x01') {
    CUser::GetAccountCargo(param_1);
    uVar2 = CUser::get_acc_id(param_1);
    iVar3 = CUser::GetUID(param_1);
    DB_DeleteAccountCargo::makeRequest(iVar3,uVar2);
    CUser::DeleteCargo(param_1);
  }
  return;
}
```
