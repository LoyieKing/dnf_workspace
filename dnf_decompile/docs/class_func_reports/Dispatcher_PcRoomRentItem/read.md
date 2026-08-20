# read

`_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE`

`Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PcRoomRentItem` | `0x081e512e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e512e  _ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE
#           Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)
# range [0x081e512e, 0x081e52bf]
081e512e +0x000:  push   %ebp
081e512f +0x001:  mov    %esp,%ebp
081e5131 +0x003:  sub    $0x28,%esp
081e5134 +0x006:  mov    0x10(%ebp),%eax
081e5137 +0x009:  mov    %eax,-0x10(%ebp)
081e513a +0x00c:  mov    -0x10(%ebp),%eax
081e513d +0x00f:  add    $0xe,%eax
081e5140 +0x012:  mov    %eax,0x4(%esp)
081e5144 +0x016:  mov    0xc(%ebp),%eax
081e5147 +0x019:  mov    %eax,(%esp)
081e514a +0x01c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e514f +0x021:  xor    $0x1,%eax
081e5152 +0x024:  test   %al,%al
081e5154 +0x026:  je     081e517f <+0x51>
081e5156 +0x028:  movl   $0x0,0xc(%esp)
081e515e +0x030:  movl   $0x0,0x8(%esp)
081e5166 +0x038:  movl   $&_ZZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e516e +0x040:  movl   $0x5e3c,(%esp)
081e5175 +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e517a +0x04c:  jmp    081e52be <+0x190>
081e517f +0x051:  mov    -0x10(%ebp),%eax
081e5182 +0x054:  add    $0xd,%eax
081e5185 +0x057:  mov    %eax,0x4(%esp)
081e5189 +0x05b:  mov    0xc(%ebp),%eax
081e518c +0x05e:  mov    %eax,(%esp)
081e518f +0x061:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e5194 +0x066:  xor    $0x1,%eax
081e5197 +0x069:  test   %al,%al
081e5199 +0x06b:  je     081e51c4 <+0x96>
081e519b +0x06d:  movl   $0x0,0xc(%esp)
081e51a3 +0x075:  movl   $0x0,0x8(%esp)
081e51ab +0x07d:  movl   $&_ZZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e51b3 +0x085:  movl   $0x5e40,(%esp)
081e51ba +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e51bf +0x091:  jmp    081e52be <+0x190>
081e51c4 +0x096:  mov    -0x10(%ebp),%eax
081e51c7 +0x099:  movzbl 0xd(%eax),%eax
081e51cb +0x09d:  test   %al,%al
081e51cd +0x09f:  jle    081e51da <+0xac>
081e51cf +0x0a1:  mov    -0x10(%ebp),%eax
081e51d2 +0x0a4:  movzbl 0xd(%eax),%eax
081e51d6 +0x0a8:  cmp    $0x1,%al
081e51d8 +0x0aa:  jle    081e5203 <+0xd5>
081e51da +0x0ac:  movl   $0x0,0xc(%esp)
081e51e2 +0x0b4:  movl   $0x0,0x8(%esp)
081e51ea +0x0bc:  movl   $&_ZZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e51f2 +0x0c4:  movl   $0x5e43,(%esp)
081e51f9 +0x0cb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e51fe +0x0d0:  jmp    081e52be <+0x190>
081e5203 +0x0d5:  movl   $0x0,-0xc(%ebp)
081e520a +0x0dc:  jmp    081e52a1 <+0x173>
081e520f +0x0e1:  mov    -0xc(%ebp),%eax
081e5212 +0x0e4:  add    %eax,%eax
081e5214 +0x0e6:  add    -0x10(%ebp),%eax
081e5217 +0x0e9:  add    $0xf,%eax
081e521a +0x0ec:  mov    %eax,0x4(%esp)
081e521e +0x0f0:  mov    0xc(%ebp),%eax
081e5221 +0x0f3:  mov    %eax,(%esp)
081e5224 +0x0f6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e5229 +0x0fb:  xor    $0x1,%eax
081e522c +0x0fe:  test   %al,%al
081e522e +0x100:  je     081e5256 <+0x128>
081e5230 +0x102:  movl   $0x0,0xc(%esp)
081e5238 +0x10a:  movl   $0x0,0x8(%esp)
081e5240 +0x112:  movl   $&_ZZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e5248 +0x11a:  movl   $0x5e48,(%esp)
081e524f +0x121:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e5254 +0x126:  jmp    081e52be <+0x190>
081e5256 +0x128:  mov    -0xc(%ebp),%eax
081e5259 +0x12b:  add    %eax,%eax
081e525b +0x12d:  add    -0x10(%ebp),%eax
081e525e +0x130:  add    $0x10,%eax
081e5261 +0x133:  mov    %eax,0x4(%esp)
081e5265 +0x137:  mov    0xc(%ebp),%eax
081e5268 +0x13a:  mov    %eax,(%esp)
081e526b +0x13d:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e5270 +0x142:  xor    $0x1,%eax
081e5273 +0x145:  test   %al,%al
081e5275 +0x147:  je     081e529d <+0x16f>
081e5277 +0x149:  movl   $0x0,0xc(%esp)
081e527f +0x151:  movl   $0x0,0x8(%esp)
081e5287 +0x159:  movl   $&_ZZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e528f +0x161:  movl   $0x5e4a,(%esp)
081e5296 +0x168:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e529b +0x16d:  jmp    081e52be <+0x190>
081e529d +0x16f:  addl   $0x1,-0xc(%ebp)
081e52a1 +0x173:  mov    -0x10(%ebp),%eax
081e52a4 +0x176:  movzbl 0xd(%eax),%eax
081e52a8 +0x17a:  movsbl %al,%eax
081e52ab +0x17d:  cmp    -0xc(%ebp),%eax
081e52ae +0x180:  setg   %al
081e52b1 +0x183:  test   %al,%al
081e52b3 +0x185:  jne    081e520f <+0xe1>
081e52b9 +0x18b:  mov    $0x0,%eax
081e52be +0x190:  leave
081e52bf +0x191:  ret
```

## 反编译 C

```c
// Dispatcher_PcRoomRentItem::read @ 0x81e512e

/* Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PcRoomRentItem::read
          (Dispatcher_PcRoomRentItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      if (((char)param_2[0xd] < '\x01') || ('\x01' < (char)param_2[0xd])) {
        uVar2 = LineFunc(0x5e43,"virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
      else {
        for (local_10 = 0; local_10 < (char)param_2[0xd]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_10 * 2 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x5e48,
                             "virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_10 * 2 + 0x10));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x5e4a,
                             "virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
        }
        uVar2 = 0;
      }
    }
    else {
      uVar2 = LineFunc(0x5e40,"virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x5e3c,"virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}
```
