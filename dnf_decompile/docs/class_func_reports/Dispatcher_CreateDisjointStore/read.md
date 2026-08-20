# read

`_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE`

`Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CreateDisjointStore` | `0x081cf750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cf750  _ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE
#           Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)
# range [0x081cf750, 0x081cf8d3]
081cf750 +0x000:  push   %ebp
081cf751 +0x001:  mov    %esp,%ebp
081cf753 +0x003:  sub    $0x28,%esp
081cf756 +0x006:  mov    0x10(%ebp),%eax
081cf759 +0x009:  mov    %eax,-0xc(%ebp)
081cf75c +0x00c:  mov    -0xc(%ebp),%eax
081cf75f +0x00f:  add    $0x110,%eax
081cf764 +0x014:  mov    %eax,0x4(%esp)
081cf768 +0x018:  mov    0xc(%ebp),%eax
081cf76b +0x01b:  mov    %eax,(%esp)
081cf76e +0x01e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cf773 +0x023:  xor    $0x1,%eax
081cf776 +0x026:  test   %al,%al
081cf778 +0x028:  je     081cf7a3 <+0x53>
081cf77a +0x02a:  movl   $0x0,0xc(%esp)
081cf782 +0x032:  movl   $0x0,0x8(%esp)
081cf78a +0x03a:  movl   $&_ZZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf792 +0x042:  movl   $0x2976,(%esp)
081cf799 +0x049:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf79e +0x04e:  jmp    081cf8d1 <+0x181>
081cf7a3 +0x053:  mov    -0xc(%ebp),%eax
081cf7a6 +0x056:  mov    0x110(%eax),%eax
081cf7ac +0x05c:  mov    -0xc(%ebp),%edx
081cf7af +0x05f:  add    $0xd,%edx
081cf7b2 +0x062:  mov    %eax,0xc(%esp)
081cf7b6 +0x066:  movl   $0x100,0x8(%esp)
081cf7be +0x06e:  mov    %edx,0x4(%esp)
081cf7c2 +0x072:  mov    0xc(%ebp),%eax
081cf7c5 +0x075:  mov    %eax,(%esp)
081cf7c8 +0x078:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cf7cd +0x07d:  xor    $0x1,%eax
081cf7d0 +0x080:  test   %al,%al
081cf7d2 +0x082:  je     081cf7fd <+0xad>
081cf7d4 +0x084:  movl   $0x0,0xc(%esp)
081cf7dc +0x08c:  movl   $0x0,0x8(%esp)
081cf7e4 +0x094:  movl   $&_ZZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf7ec +0x09c:  movl   $0x2979,(%esp)
081cf7f3 +0x0a3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf7f8 +0x0a8:  jmp    081cf8d1 <+0x181>
081cf7fd +0x0ad:  mov    -0xc(%ebp),%eax
081cf800 +0x0b0:  add    $0x114,%eax
081cf805 +0x0b5:  mov    %eax,0x4(%esp)
081cf809 +0x0b9:  mov    0xc(%ebp),%eax
081cf80c +0x0bc:  mov    %eax,(%esp)
081cf80f +0x0bf:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cf814 +0x0c4:  xor    $0x1,%eax
081cf817 +0x0c7:  test   %al,%al
081cf819 +0x0c9:  je     081cf844 <+0xf4>
081cf81b +0x0cb:  movl   $0x0,0xc(%esp)
081cf823 +0x0d3:  movl   $0x0,0x8(%esp)
081cf82b +0x0db:  movl   $&_ZZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf833 +0x0e3:  movl   $0x297c,(%esp)
081cf83a +0x0ea:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf83f +0x0ef:  jmp    081cf8d1 <+0x181>
081cf844 +0x0f4:  mov    -0xc(%ebp),%eax
081cf847 +0x0f7:  add    $0x118,%eax
081cf84c +0x0fc:  mov    %eax,0x4(%esp)
081cf850 +0x100:  mov    0xc(%ebp),%eax
081cf853 +0x103:  mov    %eax,(%esp)
081cf856 +0x106:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081cf85b +0x10b:  xor    $0x1,%eax
081cf85e +0x10e:  test   %al,%al
081cf860 +0x110:  je     081cf888 <+0x138>
081cf862 +0x112:  movl   $0x0,0xc(%esp)
081cf86a +0x11a:  movl   $0x0,0x8(%esp)
081cf872 +0x122:  movl   $&_ZZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf87a +0x12a:  movl   $0x297f,(%esp)
081cf881 +0x131:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf886 +0x136:  jmp    081cf8d1 <+0x181>
081cf888 +0x138:  mov    -0xc(%ebp),%eax
081cf88b +0x13b:  add    $0x11a,%eax
081cf890 +0x140:  mov    %eax,0x4(%esp)
081cf894 +0x144:  mov    0xc(%ebp),%eax
081cf897 +0x147:  mov    %eax,(%esp)
081cf89a +0x14a:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081cf89f +0x14f:  xor    $0x1,%eax
081cf8a2 +0x152:  test   %al,%al
081cf8a4 +0x154:  je     081cf8cc <+0x17c>
081cf8a6 +0x156:  movl   $0x0,0xc(%esp)
081cf8ae +0x15e:  movl   $0x0,0x8(%esp)
081cf8b6 +0x166:  movl   $&_ZZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf8be +0x16e:  movl   $0x2982,(%esp)
081cf8c5 +0x175:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf8ca +0x17a:  jmp    081cf8d1 <+0x181>
081cf8cc +0x17c:  mov    $0x0,%eax
081cf8d1 +0x181:  leave
081cf8d2 +0x182:  ret
081cf8d3 +0x183:  nop
```

## 反编译 C

```c
// Dispatcher_CreateDisjointStore::read @ 0x81cf750

/* Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CreateDisjointStore::read
          (Dispatcher_CreateDisjointStore *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x110));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0xd),0x100,*(int *)(param_2 + 0x110));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x114));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x118));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11a));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x2982,
                             "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x297f,
                           "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x297c,
                         "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2979,
                       "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2976,
                     "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
