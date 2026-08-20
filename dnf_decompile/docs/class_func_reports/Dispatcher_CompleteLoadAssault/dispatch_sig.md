# dispatch_sig

`_ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CompleteLoadAssault::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompleteLoadAssault` | `0x08206f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08206f10  _ZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CompleteLoadAssault::dispatch_sig(CUser*, PacketBuf&)
# range [0x08206f10, 0x08206fe9]
08206f10 +0x00:  push   %ebp
08206f11 +0x01:  mov    %esp,%ebp
08206f13 +0x03:  sub    $0x28,%esp
08206f16 +0x06:  mov    0xc(%ebp),%eax
08206f19 +0x09:  mov    %eax,(%esp)
08206f1c +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08206f21 +0x11:  cmp    $0x1,%eax
08206f24 +0x14:  setle  %al
08206f27 +0x17:  test   %al,%al
08206f29 +0x19:  je     08206f54 <+0x44>
08206f2b +0x1b:  movl   $0x0,0xc(%esp)
08206f33 +0x23:  movl   $0x0,0x8(%esp)
08206f3b +0x2b:  movl   $&_ZZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206f43 +0x33:  movl   $0xa199,(%esp)
08206f4a +0x3a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206f4f +0x3f:  jmp    08206fe7 <+0xd7>
08206f54 +0x44:  mov    0xc(%ebp),%eax
08206f57 +0x47:  mov    %eax,(%esp)
08206f5a +0x4a:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
08206f5f +0x4f:  mov    %eax,-0xc(%ebp)
08206f62 +0x52:  cmpl   $0x0,-0xc(%ebp)
08206f66 +0x56:  je     08206fa1 <+0x91>
08206f68 +0x58:  mov    -0xc(%ebp),%eax
08206f6b +0x5b:  mov    0x6e4(%eax),%eax
08206f71 +0x61:  test   %eax,%eax
08206f73 +0x63:  je     08206fa1 <+0x91>
08206f75 +0x65:  mov    -0xc(%ebp),%eax
08206f78 +0x68:  mov    0x6e4(%eax),%eax
08206f7e +0x6e:  mov    (%eax),%eax
08206f80 +0x70:  add    $0x54,%eax
08206f83 +0x73:  mov    (%eax),%ecx
08206f85 +0x75:  mov    -0xc(%ebp),%eax
08206f88 +0x78:  mov    0x6e4(%eax),%eax
08206f8e +0x7e:  mov    0xc(%ebp),%edx
08206f91 +0x81:  mov    %edx,0x4(%esp)
08206f95 +0x85:  mov    %eax,(%esp)
08206f98 +0x88:  call   *%ecx
08206f9a +0x8a:  mov    $0x0,%eax
08206f9f +0x8f:  jmp    08206fe7 <+0xd7>
08206fa1 +0x91:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
08206fa6 +0x96:  mov    0xc(%ebp),%edx
08206fa9 +0x99:  mov    %edx,0x4(%esp)
08206fad +0x9d:  mov    %eax,(%esp)
08206fb0 +0xa0:  call   082ef1e2 <_ZN11pvp_assault11CAssaultMgr14OnCompleteLoadEP5CUser>  ; pvp_assault::CAssaultMgr::OnCompleteLoad(CUser*)
08206fb5 +0xa5:  xor    $0x1,%eax
08206fb8 +0xa8:  test   %al,%al
08206fba +0xaa:  je     08206fe2 <+0xd2>
08206fbc +0xac:  movl   $0x0,0xc(%esp)
08206fc4 +0xb4:  movl   $0x0,0x8(%esp)
08206fcc +0xbc:  movl   $&_ZZN30Dispatcher_CompleteLoadAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206fd4 +0xc4:  movl   $0xa1a8,(%esp)
08206fdb +0xcb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206fe0 +0xd0:  jmp    08206fe7 <+0xd7>
08206fe2 +0xd2:  mov    $0x0,%eax
08206fe7 +0xd7:  leave
08206fe8 +0xd8:  ret
08206fe9 +0xd9:  nop
```

## 反编译 C

```c
// Dispatcher_CompleteLoadAssault::dispatch_sig @ 0x8206f10

/* Dispatcher_CompleteLoadAssault::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CompleteLoadAssault::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CAssaultMgr *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa199,
                     "virtual int Dispatcher_CompleteLoadAssault::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    iVar2 = CUser::GetPVPRoom((CUser *)param_2);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x6e4) == 0)) {
      this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      cVar1 = pvp_assault::CAssaultMgr::OnCompleteLoad(this,(CUser *)param_2);
      if (cVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xa1a8,
                         "virtual int Dispatcher_CompleteLoadAssault::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      (**(code **)(**(int **)(iVar2 + 0x6e4) + 0x54))(*(undefined4 *)(iVar2 + 0x6e4),param_2);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
