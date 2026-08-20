# Init

`_ZN12CDBConnector4InitER12STDBConnInfo`

`CDBConnector::Init(STDBConnInfo&)`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec620  _ZN12CDBConnector4InitER12STDBConnInfo
#           CDBConnector::Init(STDBConnInfo&)
# range [0x080ec620, 0x080ec667]
080ec620 +0x00:  push   %ebp
080ec621 +0x01:  mov    %esp,%ebp
080ec623 +0x03:  push   %edi
080ec624 +0x04:  push   %esi
080ec625 +0x05:  push   %ebx
080ec626 +0x06:  sub    $0x1c,%esp
080ec629 +0x09:  mov    0x8(%ebp),%edx
080ec62c +0x0c:  mov    0xc(%ebp),%eax
080ec62f +0x0f:  lea    0x4(%edx),%ebx
080ec632 +0x12:  mov    %eax,%edx
080ec634 +0x14:  mov    $0x5a,%eax
080ec639 +0x19:  mov    %ebx,%edi
080ec63b +0x1b:  mov    %edx,%esi
080ec63d +0x1d:  mov    %eax,%ecx
080ec63f +0x1f:  rep movsl %ds:(%esi),%es:(%edi)
080ec641 +0x21:  mov    0x8(%ebp),%eax
080ec644 +0x24:  mov    %eax,(%esp)
080ec647 +0x27:  call   080ec67c <_ZN12CDBConnector10OpenMasterEv>  ; CDBConnector::OpenMaster()
080ec64c +0x2c:  xor    $0x1,%eax
080ec64f +0x2f:  test   %al,%al
080ec651 +0x31:  je     080ec65a <+0x3a>
080ec653 +0x33:  mov    $0x0,%eax
080ec658 +0x38:  jmp    080ec65f <+0x3f>
080ec65a +0x3a:  mov    $0x1,%eax
080ec65f +0x3f:  add    $0x1c,%esp
080ec662 +0x42:  pop    %ebx
080ec663 +0x43:  pop    %esi
080ec664 +0x44:  pop    %edi
080ec665 +0x45:  pop    %ebp
080ec666 +0x46:  ret
080ec667 +0x47:  nop
```

## 反编译 C

```c
// CDBConnector::Init @ 0x80ec620

/* CDBConnector::Init(STDBConnInfo&) */

bool __thiscall CDBConnector::Init(CDBConnector *this,STDBConnInfo *param_1)

{
  char cVar1;
  int iVar2;
  CDBConnector *pCVar3;
  
  pCVar3 = this;
  for (iVar2 = 0x5a; pCVar3 = pCVar3 + 4, iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
  }
  cVar1 = OpenMaster(this);
  return cVar1 == '\x01';
}
```
