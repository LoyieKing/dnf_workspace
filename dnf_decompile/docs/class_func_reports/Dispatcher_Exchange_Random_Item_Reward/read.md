# read

`_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE`

`Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Exchange_Random_Item_Reward` | `0x081de406` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de406  _ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE
#           Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&)
# range [0x081de406, 0x081de52b]
081de406 +0x000:  push   %ebp
081de407 +0x001:  mov    %esp,%ebp
081de409 +0x003:  sub    $0x28,%esp
081de40c +0x006:  mov    0x10(%ebp),%eax
081de40f +0x009:  mov    %eax,-0x10(%ebp)
081de412 +0x00c:  mov    -0x10(%ebp),%eax
081de415 +0x00f:  add    $0xe,%eax
081de418 +0x012:  mov    %eax,0x4(%esp)
081de41c +0x016:  mov    0xc(%ebp),%eax
081de41f +0x019:  mov    %eax,(%esp)
081de422 +0x01c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081de427 +0x021:  xor    $0x1,%eax
081de42a +0x024:  test   %al,%al
081de42c +0x026:  je     081de457 <+0x51>
081de42e +0x028:  movl   $0x0,0xc(%esp)
081de436 +0x030:  movl   $0x0,0x8(%esp)
081de43e +0x038:  movl   $&_ZZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081de446 +0x040:  movl   $0x4fc8,(%esp)
081de44d +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081de452 +0x04c:  jmp    081de52a <+0x124>
081de457 +0x051:  movb   $0x0,-0x15(%ebp)
081de45b +0x055:  lea    -0x15(%ebp),%eax
081de45e +0x058:  mov    %eax,0x4(%esp)
081de462 +0x05c:  mov    0xc(%ebp),%eax
081de465 +0x05f:  mov    %eax,(%esp)
081de468 +0x062:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081de46d +0x067:  xor    $0x1,%eax
081de470 +0x06a:  test   %al,%al
081de472 +0x06c:  je     081de49d <+0x97>
081de474 +0x06e:  movl   $0x0,0xc(%esp)
081de47c +0x076:  movl   $0x0,0x8(%esp)
081de484 +0x07e:  movl   $&_ZZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081de48c +0x086:  movl   $0x4fcc,(%esp)
081de493 +0x08d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081de498 +0x092:  jmp    081de52a <+0x124>
081de49d +0x097:  movw   $0x0,-0x18(%ebp)
081de4a3 +0x09d:  movl   $0x0,-0xc(%ebp)
081de4aa +0x0a4:  jmp    081de514 <+0x10e>
081de4ac +0x0a6:  lea    -0x18(%ebp),%eax
081de4af +0x0a9:  mov    %eax,0x4(%esp)
081de4b3 +0x0ad:  mov    0xc(%ebp),%eax
081de4b6 +0x0b0:  mov    %eax,(%esp)
081de4b9 +0x0b3:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081de4be +0x0b8:  xor    $0x1,%eax
081de4c1 +0x0bb:  test   %al,%al
081de4c3 +0x0bd:  je     081de4eb <+0xe5>
081de4c5 +0x0bf:  movl   $0x0,0xc(%esp)
081de4cd +0x0c7:  movl   $0x0,0x8(%esp)
081de4d5 +0x0cf:  movl   $&_ZZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081de4dd +0x0d7:  movl   $0x4fd2,(%esp)
081de4e4 +0x0de:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081de4e9 +0x0e3:  jmp    081de52a <+0x124>
081de4eb +0x0e5:  movzwl -0x18(%ebp),%eax
081de4ef +0x0e9:  movzwl %ax,%eax
081de4f2 +0x0ec:  mov    %eax,-0x14(%ebp)
081de4f5 +0x0ef:  mov    -0x10(%ebp),%eax
081de4f8 +0x0f2:  lea    0x10(%eax),%edx
081de4fb +0x0f5:  lea    -0x14(%ebp),%eax
081de4fe +0x0f8:  mov    %eax,0x4(%esp)
081de502 +0x0fc:  mov    %edx,(%esp)
081de505 +0x0ff:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
081de50a +0x104:  movw   $0x0,-0x18(%ebp)
081de510 +0x10a:  addl   $0x1,-0xc(%ebp)
081de514 +0x10e:  movzbl -0x15(%ebp),%eax
081de518 +0x112:  movzbl %al,%eax
081de51b +0x115:  cmp    -0xc(%ebp),%eax
081de51e +0x118:  seta   %al
081de521 +0x11b:  test   %al,%al
081de523 +0x11d:  jne    081de4ac <+0xa6>
081de525 +0x11f:  mov    $0x0,%eax
081de52a +0x124:  leave
081de52b +0x125:  ret
```

## 反编译 C

```c
// Dispatcher_Exchange_Random_Item_Reward::read @ 0x81de406

/* Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Exchange_Random_Item_Reward::read
          (Dispatcher_Exchange_Random_Item_Reward *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  ushort local_1c;
  byte local_19;
  uint local_18;
  MSG_BASE *local_14;
  uint local_10;
  
  local_14 = param_2;
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    local_19 = 0;
    cVar1 = PacketBuf::get_byte(param_1,&local_19);
    if (cVar1 == '\x01') {
      for (local_10 = 0; local_1c = 0, local_10 < local_19; local_10 = local_10 + 1) {
        cVar1 = PacketBuf::get_short(param_1,&local_1c);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x4fd2,
                           "virtual int Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        local_18 = (uint)local_1c;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(local_14 + 0x10),(int *)&local_18);
      }
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x4fcc,
                       "virtual int Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x4fc8,
                     "virtual int Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
