# SendSpawnRidableObject

`_ZN8CRidable22SendSpawnRidableObjectEP11PacketGuardiiii`

`CRidable::SendSpawnRidableObject(PacketGuard*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CRidable` | `0x082fece2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fece2  _ZN8CRidable22SendSpawnRidableObjectEP11PacketGuardiiii
#           CRidable::SendSpawnRidableObject(PacketGuard*, int, int, int, int)
# range [0x082fece2, 0x082fed31]
082fece2 +0x00:  push   %ebp
082fece3 +0x01:  mov    %esp,%ebp
082fece5 +0x03:  sub    $0x18,%esp
082fece8 +0x06:  mov    0xc(%ebp),%eax
082feceb +0x09:  mov    0x10(%ebp),%edx
082fecee +0x0c:  mov    %edx,0x4(%esp)
082fecf2 +0x10:  mov    %eax,(%esp)
082fecf5 +0x13:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082fecfa +0x18:  mov    0xc(%ebp),%eax
082fecfd +0x1b:  mov    0x14(%ebp),%edx
082fed00 +0x1e:  mov    %edx,0x4(%esp)
082fed04 +0x22:  mov    %eax,(%esp)
082fed07 +0x25:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082fed0c +0x2a:  mov    0xc(%ebp),%eax
082fed0f +0x2d:  mov    0x18(%ebp),%edx
082fed12 +0x30:  mov    %edx,0x4(%esp)
082fed16 +0x34:  mov    %eax,(%esp)
082fed19 +0x37:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082fed1e +0x3c:  mov    0xc(%ebp),%eax
082fed21 +0x3f:  mov    0x1c(%ebp),%edx
082fed24 +0x42:  mov    %edx,0x4(%esp)
082fed28 +0x46:  mov    %eax,(%esp)
082fed2b +0x49:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082fed30 +0x4e:  leave
082fed31 +0x4f:  ret
```

## 反编译 C

```c
// CRidable::SendSpawnRidableObject @ 0x82fece2

/* CRidable::SendSpawnRidableObject(PacketGuard*, int, int, int, int) */

void __thiscall
CRidable::SendSpawnRidableObject
          (CRidable *this,PacketGuard *param_1,int param_2,int param_3,int param_4,int param_5)

{
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_5);
  return;
}
```
