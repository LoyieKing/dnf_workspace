# UpdateBuyableRestrictItem

`_ZN19CerashopAddRestrict7Manager25UpdateBuyableRestrictItemEP5CUserjj`

`CerashopAddRestrict::Manager::UpdateBuyableRestrictItem(CUser*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0d14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0d14  _ZN19CerashopAddRestrict7Manager25UpdateBuyableRestrictItemEP5CUserjj
#           CerashopAddRestrict::Manager::UpdateBuyableRestrictItem(CUser*, unsigned int, unsigned int)
# range [0x080e0d14, 0x080e0d8f]
080e0d14 +0x00:  push   %ebp
080e0d15 +0x01:  mov    %esp,%ebp
080e0d17 +0x03:  sub    $0x38,%esp
080e0d1a +0x06:  call   080e274d <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4f3>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4f3
080e0d1f +0x0b:  mov    0xc(%ebp),%edx
080e0d22 +0x0e:  mov    %edx,0x4(%esp)
080e0d26 +0x12:  mov    %eax,(%esp)
080e0d29 +0x15:  call   080e0e4a <_ZN19CerashopAddRestrict7Manager9FindIpgNoEj>  ; CerashopAddRestrict::Manager::FindIpgNo(unsigned int)
080e0d2e +0x1a:  xor    $0x1,%eax
080e0d31 +0x1d:  test   %al,%al
080e0d33 +0x1f:  jne    080e0d8c <+0x78>
080e0d35 +0x21:  lea    -0x10(%ebp),%eax
080e0d38 +0x24:  mov    %eax,(%esp)
080e0d3b +0x27:  call   080e243c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1e2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1e2
080e0d40 +0x2c:  call   080e274d <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4f3>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4f3
080e0d45 +0x31:  lea    -0x10(%ebp),%edx
080e0d48 +0x34:  mov    %edx,0x10(%esp)
080e0d4c +0x38:  mov    0x10(%ebp),%edx
080e0d4f +0x3b:  mov    %edx,0xc(%esp)
080e0d53 +0x3f:  mov    0xc(%ebp),%edx
080e0d56 +0x42:  mov    %edx,0x8(%esp)
080e0d5a +0x46:  mov    0x8(%ebp),%edx
080e0d5d +0x49:  mov    %edx,0x4(%esp)
080e0d61 +0x4d:  mov    %eax,(%esp)
080e0d64 +0x50:  call   080e129a <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE>  ; CerashopAddRestrict::Manager::InputBuyInfo(CUser*, unsigned int, unsigned int, CerashopAddRestrict::DBInputData&)
080e0d69 +0x55:  test   %al,%al
080e0d6b +0x57:  je     080e0d8d <+0x79>
080e0d6d +0x59:  lea    -0x10(%ebp),%eax
080e0d70 +0x5c:  mov    %eax,0x4(%esp)
080e0d74 +0x60:  mov    0x8(%ebp),%eax
080e0d77 +0x63:  mov    %eax,(%esp)
080e0d7a +0x66:  call   080e17ba <_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE>  ; DB_SaveCerashopAddRestrictType::makeRequest(CUser*, CerashopAddRestrict::DBInputData&)
080e0d7f +0x6b:  mov    0x8(%ebp),%eax
080e0d82 +0x6e:  mov    %eax,(%esp)
080e0d85 +0x71:  call   080e0dec <_ZN19CerashopAddRestrict7Manager14SendSyncPacketEP5CUser>  ; CerashopAddRestrict::Manager::SendSyncPacket(CUser*)
080e0d8a +0x76:  jmp    080e0d8d <+0x79>
080e0d8c +0x78:  nop
080e0d8d +0x79:  leave
080e0d8e +0x7a:  ret
080e0d8f +0x7b:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::UpdateBuyableRestrictItem @ 0x80e0d14

/* CerashopAddRestrict::Manager::UpdateBuyableRestrictItem(CUser*, unsigned int, unsigned int) */

void CerashopAddRestrict::Manager::UpdateBuyableRestrictItem
               (CUser *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  Manager *this;
  DBInputData local_14 [16];
  
  uVar2 = ARAD::Singleton<CerashopAddRestrict::Manager>::Get();
  cVar1 = FindIpgNo(uVar2);
  if (cVar1 == '\x01') {
    DBInputData::DBInputData(local_14);
    this = (Manager *)ARAD::Singleton<CerashopAddRestrict::Manager>::Get();
    cVar1 = InputBuyInfo(this,param_1,param_2,param_3,local_14);
    if (cVar1 != '\0') {
      DB_SaveCerashopAddRestrictType::makeRequest(param_1,local_14);
      SendSyncPacket(param_1);
    }
  }
  return;
}
```
