# dispatch_sig

`_ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_EnterPrivateStore::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EnterPrivateStore` | `0x082025ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082025ae  _ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_EnterPrivateStore::dispatch_sig(CUser*, PacketBuf&)
# range [0x082025ae, 0x0820269b]
082025ae +0x00:  push   %ebp
082025af +0x01:  mov    %esp,%ebp
082025b1 +0x03:  push   %ebx
082025b2 +0x04:  sub    $0x24,%esp
082025b5 +0x07:  mov    0xc(%ebp),%eax
082025b8 +0x0a:  mov    %eax,(%esp)
082025bb +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082025c0 +0x12:  cmp    $0x3,%eax
082025c3 +0x15:  jne    082025d4 <+0x26>
082025c5 +0x17:  mov    0xc(%ebp),%eax
082025c8 +0x1a:  mov    %eax,(%esp)
082025cb +0x1d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082025d0 +0x22:  test   %eax,%eax
082025d2 +0x24:  jne    082025db <+0x2d>
082025d4 +0x26:  mov    $0x1,%eax
082025d9 +0x2b:  jmp    082025e0 <+0x32>
082025db +0x2d:  mov    $0x0,%eax
082025e0 +0x32:  test   %al,%al
082025e2 +0x34:  je     0820260d <+0x5f>
082025e4 +0x36:  movl   $0x0,0xc(%esp)
082025ec +0x3e:  movl   $0x0,0x8(%esp)
082025f4 +0x46:  movl   $&_ZZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082025fc +0x4e:  movl   $0x98d4,(%esp)
08202603 +0x55:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202608 +0x5a:  jmp    08202696 <+0xe8>
0820260d +0x5f:  movw   $0x0,-0xa(%ebp)
08202613 +0x65:  movl   $0x0,-0x10(%ebp)
0820261a +0x6c:  lea    -0xa(%ebp),%eax
0820261d +0x6f:  mov    %eax,0x4(%esp)
08202621 +0x73:  mov    0x10(%ebp),%eax
08202624 +0x76:  mov    %eax,(%esp)
08202627 +0x79:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0820262c +0x7e:  xor    $0x1,%eax
0820262f +0x81:  test   %al,%al
08202631 +0x83:  je     08202659 <+0xab>
08202633 +0x85:  movl   $0x0,0xc(%esp)
0820263b +0x8d:  movl   $0x0,0x8(%esp)
08202643 +0x95:  movl   $&_ZZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820264b +0x9d:  movl   $0x98d8,(%esp)
08202652 +0xa4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202657 +0xa9:  jmp    08202696 <+0xe8>
08202659 +0xab:  movzwl -0xa(%ebp),%eax
0820265d +0xaf:  movzwl %ax,%ebx
08202660 +0xb2:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08202665 +0xb7:  mov    %ebx,0xc(%esp)
08202669 +0xbb:  mov    0xc(%ebp),%edx
0820266c +0xbe:  mov    %edx,0x8(%esp)
08202670 +0xc2:  lea    -0x10(%ebp),%edx
08202673 +0xc5:  mov    %edx,0x4(%esp)
08202677 +0xc9:  mov    %eax,(%esp)
0820267a +0xcc:  call   085ca760 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUsert>  ; private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, unsigned short)
0820267f +0xd1:  mov    -0x10(%ebp),%eax
08202682 +0xd4:  mov    (%eax),%eax
08202684 +0xd6:  add    $0x8,%eax
08202687 +0xd9:  mov    (%eax),%edx
08202689 +0xdb:  mov    -0x10(%ebp),%eax
0820268c +0xde:  mov    %eax,(%esp)
0820268f +0xe1:  call   *%edx
08202691 +0xe3:  mov    $0x0,%eax
08202696 +0xe8:  add    $0x24,%esp
08202699 +0xeb:  pop    %ebx
0820269a +0xec:  pop    %ebp
0820269b +0xed:  ret
```

## 反编译 C

```c
// Dispatcher_EnterPrivateStore::dispatch_sig @ 0x82025ae

/* Dispatcher_EnterPrivateStore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_EnterPrivateStore::dispatch_sig
          (Dispatcher_EnterPrivateStore *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CPrivateStoreMgr *this_00;
  IBuyer *local_14;
  ushort local_e [3];
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 3) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_082025e0;
    }
  }
  bVar1 = true;
LAB_082025e0:
  if (bVar1) {
    uVar5 = LineFunc(0x98d4,
                     "virtual int Dispatcher_EnterPrivateStore::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    local_e[0] = 0;
    local_14 = (IBuyer *)0x0;
    cVar3 = PacketBuf::get_short(param_2,(short *)local_e);
    uVar2 = local_e[0];
    if (cVar3 == '\x01') {
      this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      private_store::CPrivateStoreMgr::GetStoreBuyer(this_00,&local_14,param_1,uVar2);
      (**(code **)(*(int *)local_14 + 8))(local_14);
      uVar5 = 0;
    }
    else {
      uVar5 = LineFunc(0x98d8,
                       "virtual int Dispatcher_EnterPrivateStore::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar5;
}
```
