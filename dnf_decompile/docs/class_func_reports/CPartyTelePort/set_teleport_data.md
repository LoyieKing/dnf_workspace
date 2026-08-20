# set_teleport_data

`_ZN14CPartyTelePort17set_teleport_dataEhhsshc`

`CPartyTelePort::set_teleport_data(unsigned char, unsigned char, short, short, unsigned char, char)`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bb85c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb85c  _ZN14CPartyTelePort17set_teleport_dataEhhsshc
#           CPartyTelePort::set_teleport_data(unsigned char, unsigned char, short, short, unsigned char, char)
# range [0x085bb85c, 0x085bb91b]
085bb85c +0x00:  push   %ebp
085bb85d +0x01:  mov    %esp,%ebp
085bb85f +0x03:  push   %edi
085bb860 +0x04:  push   %esi
085bb861 +0x05:  push   %ebx
085bb862 +0x06:  sub    $0x5c,%esp
085bb865 +0x09:  mov    0xc(%ebp),%edi
085bb868 +0x0c:  mov    0x10(%ebp),%esi
085bb86b +0x0f:  mov    0x14(%ebp),%ebx
085bb86e +0x12:  mov    0x18(%ebp),%ecx
085bb871 +0x15:  mov    0x1c(%ebp),%edx
085bb874 +0x18:  mov    0x20(%ebp),%eax
085bb877 +0x1b:  mov    %eax,-0x4c(%ebp)
085bb87a +0x1e:  mov    %edi,%eax
085bb87c +0x20:  mov    %al,-0x2c(%ebp)
085bb87f +0x23:  mov    %esi,%eax
085bb881 +0x25:  mov    %al,-0x30(%ebp)
085bb884 +0x28:  mov    %bx,-0x34(%ebp)
085bb888 +0x2c:  mov    %cx,-0x38(%ebp)
085bb88c +0x30:  mov    %dl,-0x3c(%ebp)
085bb88f +0x33:  movzbl -0x4c(%ebp),%eax
085bb893 +0x37:  mov    %al,-0x40(%ebp)
085bb896 +0x3a:  mov    0x8(%ebp),%eax
085bb899 +0x3d:  add    $0x4,%eax
085bb89c +0x40:  mov    %eax,(%esp)
085bb89f +0x43:  call   0822d764 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e0e
085bb8a4 +0x48:  mov    0x8(%ebp),%eax
085bb8a7 +0x4b:  movzbl -0x2c(%ebp),%edx
085bb8ab +0x4f:  mov    %dl,0x5(%eax)
085bb8ae +0x52:  mov    0x8(%ebp),%eax
085bb8b1 +0x55:  movzbl -0x30(%ebp),%edx
085bb8b5 +0x59:  mov    %dl,0x6(%eax)
085bb8b8 +0x5c:  mov    0x8(%ebp),%eax
085bb8bb +0x5f:  movzwl -0x34(%ebp),%edx
085bb8bf +0x63:  mov    %dx,0x8(%eax)
085bb8c3 +0x67:  mov    0x8(%ebp),%eax
085bb8c6 +0x6a:  movzwl -0x38(%ebp),%edx
085bb8ca +0x6e:  mov    %dx,0xa(%eax)
085bb8ce +0x72:  mov    0x8(%ebp),%eax
085bb8d1 +0x75:  movzbl -0x3c(%ebp),%edx
085bb8d5 +0x79:  mov    %dl,0xc(%eax)
085bb8d8 +0x7c:  mov    0x8(%ebp),%eax
085bb8db +0x7f:  movzbl -0x40(%ebp),%edx
085bb8df +0x83:  mov    %dl,0x4(%eax)
085bb8e2 +0x86:  movl   $0x0,-0x1c(%ebp)
085bb8e9 +0x8d:  jmp    085bb909 <+0xad>
085bb8eb +0x8f:  movl   $0x2,0x8(%esp)
085bb8f3 +0x97:  mov    -0x1c(%ebp),%eax
085bb8f6 +0x9a:  mov    %eax,0x4(%esp)
085bb8fa +0x9e:  mov    0x8(%ebp),%eax
085bb8fd +0xa1:  mov    %eax,(%esp)
085bb900 +0xa4:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
085bb905 +0xa9:  addl   $0x1,-0x1c(%ebp)
085bb909 +0xad:  cmpl   $0x3,-0x1c(%ebp)
085bb90d +0xb1:  setle  %al
085bb910 +0xb4:  test   %al,%al
085bb912 +0xb6:  jne    085bb8eb <+0x8f>
085bb914 +0xb8:  add    $0x5c,%esp
085bb917 +0xbb:  pop    %ebx
085bb918 +0xbc:  pop    %esi
085bb919 +0xbd:  pop    %edi
085bb91a +0xbe:  pop    %ebp
085bb91b +0xbf:  ret
```

## 反编译 C

```c
// CPartyTelePort::set_teleport_data @ 0x85bb85c

/* CPartyTelePort::set_teleport_data(unsigned char, unsigned char, short, short, unsigned char,
   char) */

void __thiscall
CPartyTelePort::set_teleport_data
          (CPartyTelePort *this,uchar param_1,uchar param_2,short param_3,short param_4,
          uchar param_5,char param_6)

{
  int local_20;
  
  stPartyTelePort::reset((stPartyTelePort *)(this + 4));
  this[5] = (CPartyTelePort)param_1;
  this[6] = (CPartyTelePort)param_2;
  *(short *)(this + 8) = param_3;
  *(short *)(this + 10) = param_4;
  this[0xc] = (CPartyTelePort)param_5;
  this[4] = (CPartyTelePort)param_6;
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    set_teleport_member_state(this,local_20,'\x02');
  }
  return;
}
```
