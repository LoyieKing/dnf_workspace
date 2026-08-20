# read

`_ZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASE`

`Dispatcher_Debug_Clear_Quest::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Debug_Clear_Quest` | `0x081df840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df840  _ZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASE
#           Dispatcher_Debug_Clear_Quest::read(PacketBuf&, MSG_BASE&)
# range [0x081df840, 0x081df91b]
081df840 +0x00:  push   %ebp
081df841 +0x01:  mov    %esp,%ebp
081df843 +0x03:  sub    $0x28,%esp
081df846 +0x06:  mov    0x10(%ebp),%eax
081df849 +0x09:  mov    %eax,-0x10(%ebp)
081df84c +0x0c:  lea    -0x16(%ebp),%eax
081df84f +0x0f:  mov    %eax,0x4(%esp)
081df853 +0x13:  mov    0xc(%ebp),%eax
081df856 +0x16:  mov    %eax,(%esp)
081df859 +0x19:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081df85e +0x1e:  xor    $0x1,%eax
081df861 +0x21:  test   %al,%al
081df863 +0x23:  je     081df88e <+0x4e>
081df865 +0x25:  movl   $0x0,0xc(%esp)
081df86d +0x2d:  movl   $0x0,0x8(%esp)
081df875 +0x35:  movl   $&_ZZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081df87d +0x3d:  movl   $0x51e1,(%esp)
081df884 +0x44:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081df889 +0x49:  jmp    081df919 <+0xd9>
081df88e +0x4e:  movzwl -0x16(%ebp),%eax
081df892 +0x52:  movswl %ax,%edx
081df895 +0x55:  mov    -0x10(%ebp),%eax
081df898 +0x58:  mov    %edx,0x10(%eax)
081df89b +0x5b:  movl   $0x0,-0xc(%ebp)
081df8a2 +0x62:  jmp    081df904 <+0xc4>
081df8a4 +0x64:  lea    -0x18(%ebp),%eax
081df8a7 +0x67:  mov    %eax,0x4(%esp)
081df8ab +0x6b:  mov    0xc(%ebp),%eax
081df8ae +0x6e:  mov    %eax,(%esp)
081df8b1 +0x71:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081df8b6 +0x76:  xor    $0x1,%eax
081df8b9 +0x79:  test   %al,%al
081df8bb +0x7b:  je     081df8e3 <+0xa3>
081df8bd +0x7d:  movl   $0x0,0xc(%esp)
081df8c5 +0x85:  movl   $0x0,0x8(%esp)
081df8cd +0x8d:  movl   $&_ZZN28Dispatcher_Debug_Clear_Quest4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081df8d5 +0x95:  movl   $0x51e8,(%esp)
081df8dc +0x9c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081df8e1 +0xa1:  jmp    081df919 <+0xd9>
081df8e3 +0xa3:  movzwl -0x18(%ebp),%eax
081df8e7 +0xa7:  cwtl
081df8e8 +0xa8:  mov    %eax,-0x14(%ebp)
081df8eb +0xab:  mov    -0x10(%ebp),%eax
081df8ee +0xae:  lea    0x14(%eax),%edx
081df8f1 +0xb1:  lea    -0x14(%ebp),%eax
081df8f4 +0xb4:  mov    %eax,0x4(%esp)
081df8f8 +0xb8:  mov    %edx,(%esp)
081df8fb +0xbb:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
081df900 +0xc0:  addl   $0x1,-0xc(%ebp)
081df904 +0xc4:  mov    -0x10(%ebp),%eax
081df907 +0xc7:  mov    0x10(%eax),%eax
081df90a +0xca:  cmp    -0xc(%ebp),%eax
081df90d +0xcd:  setg   %al
081df910 +0xd0:  test   %al,%al
081df912 +0xd2:  jne    081df8a4 <+0x64>
081df914 +0xd4:  mov    $0x0,%eax
081df919 +0xd9:  leave
081df91a +0xda:  ret
081df91b +0xdb:  nop
```

## 反编译 C

```c
// Dispatcher_Debug_Clear_Quest::read @ 0x81df840

/* Dispatcher_Debug_Clear_Quest::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Debug_Clear_Quest::read
          (Dispatcher_Debug_Clear_Quest *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  short local_1c;
  short local_1a;
  int local_18;
  MSG_BASE *local_14;
  int local_10;
  
  local_14 = param_2;
  cVar1 = PacketBuf::get_short(param_1,&local_1a);
  if (cVar1 == '\x01') {
    *(int *)(local_14 + 0x10) = (int)local_1a;
    for (local_10 = 0; local_10 < *(int *)(local_14 + 0x10); local_10 = local_10 + 1) {
      cVar1 = PacketBuf::get_short(param_1,&local_1c);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x51e8,
                         "virtual int Dispatcher_Debug_Clear_Quest::read(PacketBuf&, MSG_BASE&)",0,0
                        );
        return uVar2;
      }
      local_18 = (int)local_1c;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(local_14 + 0x14),&local_18);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x51e1,"virtual int Dispatcher_Debug_Clear_Quest::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
