# Open

`_ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo`

`CDBConnector::Open(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&)`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec6da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec6da  _ZN12CDBConnector4OpenE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo
#           CDBConnector::Open(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&)
# range [0x080ec6da, 0x080ec75f]
080ec6da +0x00:  push   %ebp
080ec6db +0x01:  mov    %esp,%ebp
080ec6dd +0x03:  push   %edi
080ec6de +0x04:  push   %esi
080ec6df +0x05:  push   %ebx
080ec6e0 +0x06:  sub    $0x3c,%esp
080ec6e3 +0x09:  mov    0x14(%ebp),%eax
080ec6e6 +0x0c:  movzbl (%eax),%eax
080ec6e9 +0x0f:  test   %al,%al
080ec6eb +0x11:  jne    080ec6f4 <+0x1a>
080ec6ed +0x13:  mov    $0x1,%eax
080ec6f2 +0x18:  jmp    080ec758 <+0x7e>
080ec6f4 +0x1a:  mov    0x14(%ebp),%eax
080ec6f7 +0x1d:  add    $0x2d,%eax
080ec6fa +0x20:  mov    %eax,-0x1c(%ebp)
080ec6fd +0x23:  mov    0x14(%ebp),%eax
080ec700 +0x26:  lea    0x18(%eax),%edi
080ec703 +0x29:  mov    0x14(%ebp),%eax
080ec706 +0x2c:  lea    0x42(%eax),%esi
080ec709 +0x2f:  mov    0x14(%ebp),%eax
080ec70c +0x32:  mov    0x14(%eax),%ecx
080ec70f +0x35:  mov    0x14(%ebp),%eax
080ec712 +0x38:  mov    &_ZN10GlobalData8s_db_mgrE,%edx
080ec718 +0x3e:  mov    0x10(%ebp),%ebx
080ec71b +0x41:  mov    %ebx,0x1c(%esp)
080ec71f +0x45:  mov    -0x1c(%ebp),%ebx
080ec722 +0x48:  mov    %ebx,0x18(%esp)
080ec726 +0x4c:  mov    %edi,0x14(%esp)
080ec72a +0x50:  mov    %esi,0x10(%esp)
080ec72e +0x54:  mov    %ecx,0xc(%esp)
080ec732 +0x58:  mov    %eax,0x8(%esp)
080ec736 +0x5c:  mov    0xc(%ebp),%eax
080ec739 +0x5f:  mov    %eax,0x4(%esp)
080ec73d +0x63:  mov    %edx,(%esp)
080ec740 +0x66:  call   083f4d2e <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP>  ; DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, unsigned int, char*, char*, char*, ENUM_SERVER_GROUP)
080ec745 +0x6b:  xor    $0x1,%eax
080ec748 +0x6e:  test   %al,%al
080ec74a +0x70:  je     080ec753 <+0x79>
080ec74c +0x72:  mov    $0x0,%eax
080ec751 +0x77:  jmp    080ec758 <+0x7e>
080ec753 +0x79:  mov    $0x1,%eax
080ec758 +0x7e:  add    $0x3c,%esp
080ec75b +0x81:  pop    %ebx
080ec75c +0x82:  pop    %esi
080ec75d +0x83:  pop    %edi
080ec75e +0x84:  pop    %ebp
080ec75f +0x85:  ret
```

## 反编译 C

```c
// CDBConnector::Open @ 0x80ec6da

/* CDBConnector::Open(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&) */

undefined4 __thiscall
CDBConnector::Open(undefined4 this,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*param_4 == '\0') {
    uVar2 = 1;
  }
  else {
    cVar1 = DBMgr::Open(GlobalData::s_db_mgr,param_2,param_4,*(undefined4 *)(param_4 + 0x14),
                        param_4 + 0x42,param_4 + 0x18,param_4 + 0x2d,param_3);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
