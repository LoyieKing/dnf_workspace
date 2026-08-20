# read

`_ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE`

`Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardAuthRpy` | `0x08262658` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08262658  _ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE
#           Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)
# range [0x08262658, 0x082627c9]
08262658 +0x000:  push   %ebp
08262659 +0x001:  mov    %esp,%ebp
0826265b +0x003:  sub    $0x18,%esp
0826265e +0x006:  mov    0x10(%ebp),%eax
08262661 +0x009:  add    $0xd,%eax
08262664 +0x00c:  mov    %eax,0x4(%esp)
08262668 +0x010:  mov    0xc(%ebp),%eax
0826266b +0x013:  mov    %eax,(%esp)
0826266e +0x016:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08262673 +0x01b:  xor    $0x1,%eax
08262676 +0x01e:  test   %al,%al
08262678 +0x020:  je     082626a3 <+0x4b>
0826267a +0x022:  movl   $0x0,0xc(%esp)
08262682 +0x02a:  movl   $0x0,0x8(%esp)
0826268a +0x032:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08262692 +0x03a:  movl   $0x2b,(%esp)
08262699 +0x041:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0826269e +0x046:  jmp    082627c7 <+0x16f>
082626a3 +0x04b:  mov    0x10(%ebp),%eax
082626a6 +0x04e:  add    $0xe,%eax
082626a9 +0x051:  mov    %eax,0x4(%esp)
082626ad +0x055:  mov    0xc(%ebp),%eax
082626b0 +0x058:  mov    %eax,(%esp)
082626b3 +0x05b:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082626b8 +0x060:  xor    $0x1,%eax
082626bb +0x063:  test   %al,%al
082626bd +0x065:  je     082626e8 <+0x90>
082626bf +0x067:  movl   $0x0,0xc(%esp)
082626c7 +0x06f:  movl   $0x0,0x8(%esp)
082626cf +0x077:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
082626d7 +0x07f:  movl   $0x2e,(%esp)
082626de +0x086:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082626e3 +0x08b:  jmp    082627c7 <+0x16f>
082626e8 +0x090:  mov    0x10(%ebp),%eax
082626eb +0x093:  add    $0x100f,%eax
082626f0 +0x098:  mov    %eax,0x4(%esp)
082626f4 +0x09c:  mov    0xc(%ebp),%eax
082626f7 +0x09f:  mov    %eax,(%esp)
082626fa +0x0a2:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082626ff +0x0a7:  xor    $0x1,%eax
08262702 +0x0aa:  test   %al,%al
08262704 +0x0ac:  je     0826272f <+0xd7>
08262706 +0x0ae:  movl   $0x0,0xc(%esp)
0826270e +0x0b6:  movl   $0x0,0x8(%esp)
08262716 +0x0be:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0826271e +0x0c6:  movl   $0x32,(%esp)
08262725 +0x0cd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0826272a +0x0d2:  jmp    082627c7 <+0x16f>
0826272f +0x0d7:  mov    0x10(%ebp),%eax
08262732 +0x0da:  mov    0x100f(%eax),%eax
08262738 +0x0e0:  mov    0x10(%ebp),%edx
0826273b +0x0e3:  add    $0xf,%edx
0826273e +0x0e6:  mov    %eax,0x8(%esp)
08262742 +0x0ea:  mov    %edx,0x4(%esp)
08262746 +0x0ee:  mov    0xc(%ebp),%eax
08262749 +0x0f1:  mov    %eax,(%esp)
0826274c +0x0f4:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08262751 +0x0f9:  xor    $0x1,%eax
08262754 +0x0fc:  test   %al,%al
08262756 +0x0fe:  je     0826277e <+0x126>
08262758 +0x100:  movl   $0x0,0xc(%esp)
08262760 +0x108:  movl   $0x0,0x8(%esp)
08262768 +0x110:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08262770 +0x118:  movl   $0x35,(%esp)
08262777 +0x11f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0826277c +0x124:  jmp    082627c7 <+0x16f>
0826277e +0x126:  mov    0x10(%ebp),%eax
08262781 +0x129:  add    $0x1013,%eax
08262786 +0x12e:  mov    %eax,0x4(%esp)
0826278a +0x132:  mov    0xc(%ebp),%eax
0826278d +0x135:  mov    %eax,(%esp)
08262790 +0x138:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08262795 +0x13d:  xor    $0x1,%eax
08262798 +0x140:  test   %al,%al
0826279a +0x142:  je     082627c2 <+0x16a>
0826279c +0x144:  movl   $0x0,0xc(%esp)
082627a4 +0x14c:  movl   $0x0,0x8(%esp)
082627ac +0x154:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
082627b4 +0x15c:  movl   $0x3a,(%esp)
082627bb +0x163:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082627c0 +0x168:  jmp    082627c7 <+0x16f>
082627c2 +0x16a:  mov    $0x0,%eax
082627c7 +0x16f:  leave
082627c8 +0x170:  ret
082627c9 +0x171:  nop
```

## 反编译 C

```c
// Dispatcher_SecurityCardAuthRpy::read @ 0x8262658

/* Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecurityCardAuthRpy::read
          (Dispatcher_SecurityCardAuthRpy *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x100f));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0xf),*(int *)(param_2 + 0x100f));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x1013));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x3a,
                             "virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x35,
                           "virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x32,
                         "virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2e,
                       "virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2b,"virtual int Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
