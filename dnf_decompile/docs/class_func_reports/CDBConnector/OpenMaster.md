# OpenMaster

`_ZN12CDBConnector10OpenMasterEv`

`CDBConnector::OpenMaster()`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec67c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec67c  _ZN12CDBConnector10OpenMasterEv
#           CDBConnector::OpenMaster()
# range [0x080ec67c, 0x080ec6bb]
080ec67c +0x00:  push   %ebp
080ec67d +0x01:  mov    %esp,%ebp
080ec67f +0x03:  sub    $0x18,%esp
080ec682 +0x06:  mov    0x8(%ebp),%eax
080ec685 +0x09:  add    $0x4,%eax
080ec688 +0x0c:  mov    %eax,0xc(%esp)
080ec68c +0x10:  movl   $0x0,0x8(%esp)
080ec694 +0x18:  movl   $0x0,0x4(%esp)
080ec69c +0x20:  mov    0x8(%ebp),%eax
080ec69f +0x23:  mov    %eax,(%esp)
080ec6a2 +0x26:  call   080ec6da <_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo>  ; CDBConnector::Open(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&)
080ec6a7 +0x2b:  xor    $0x1,%eax
080ec6aa +0x2e:  test   %al,%al
080ec6ac +0x30:  je     080ec6b5 <+0x39>
080ec6ae +0x32:  mov    $0x0,%eax
080ec6b3 +0x37:  jmp    080ec6ba <+0x3e>
080ec6b5 +0x39:  mov    $0x1,%eax
080ec6ba +0x3e:  leave
080ec6bb +0x3f:  ret
```

## 反编译 C

```c
// CDBConnector::OpenMaster @ 0x80ec67c

/* CDBConnector::OpenMaster() */

bool __thiscall CDBConnector::OpenMaster(CDBConnector *this)

{
  char cVar1;
  
  cVar1 = Open(this,0,0,this + 4);
  return cVar1 == '\x01';
}
```
