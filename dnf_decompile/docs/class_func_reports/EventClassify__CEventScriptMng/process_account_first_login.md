# process_account_first_login

`_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE`

`EventClassify::CEventScriptMng::process_account_first_login(int, CUser*, std::bitset<32u>)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810bde0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810bde0  _ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE
#           EventClassify::CEventScriptMng::process_account_first_login(int, CUser*, std::bitset<32u>)
# range [0x0810bde0, 0x0810bea7]
0810bde0 +0x00:  push   %ebp
0810bde1 +0x01:  mov    %esp,%ebp
0810bde3 +0x03:  push   %ebx
0810bde4 +0x04:  sub    $0x24,%esp
0810bde7 +0x07:  cmpl   $0x0,0x10(%ebp)
0810bdeb +0x0b:  je     0810be9e <+0xbe>
0810bdf1 +0x11:  mov    0xc(%ebp),%eax
0810bdf4 +0x14:  mov    %eax,0x4(%esp)
0810bdf8 +0x18:  mov    0x8(%ebp),%eax
0810bdfb +0x1b:  mov    %eax,(%esp)
0810bdfe +0x1e:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810be03 +0x23:  xor    $0x1,%eax
0810be06 +0x26:  test   %al,%al
0810be08 +0x28:  jne    0810bea1 <+0xc1>
0810be0e +0x2e:  mov    0xc(%ebp),%eax
0810be11 +0x31:  mov    %eax,0x4(%esp)
0810be15 +0x35:  mov    0x8(%ebp),%eax
0810be18 +0x38:  mov    %eax,(%esp)
0810be1b +0x3b:  call   0810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>  ; EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)
0810be20 +0x40:  mov    %eax,%edx
0810be22 +0x42:  lea    -0x14(%ebp),%eax
0810be25 +0x45:  mov    %edx,0x8(%esp)
0810be29 +0x49:  lea    0x14(%ebp),%edx
0810be2c +0x4c:  mov    %edx,0x4(%esp)
0810be30 +0x50:  mov    %eax,(%esp)
0810be33 +0x53:  call   08111846 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd58>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd58
0810be38 +0x58:  sub    $0x4,%esp
0810be3b +0x5b:  lea    -0x14(%ebp),%eax
0810be3e +0x5e:  mov    %eax,(%esp)
0810be41 +0x61:  call   0811187a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd8c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd8c
0810be46 +0x66:  mov    %eax,%ebx
0810be48 +0x68:  xor    $0x1,%ebx
0810be4b +0x6b:  lea    -0x14(%ebp),%eax
0810be4e +0x6e:  mov    %eax,(%esp)
0810be51 +0x71:  call   08111874 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd86>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd86
0810be56 +0x76:  test   %bl,%bl
0810be58 +0x78:  je     0810bea2 <+0xc2>
0810be5a +0x7a:  mov    0xc(%ebp),%eax
0810be5d +0x7d:  mov    %eax,0x4(%esp)
0810be61 +0x81:  mov    0x8(%ebp),%eax
0810be64 +0x84:  mov    %eax,(%esp)
0810be67 +0x87:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810be6c +0x8c:  mov    %eax,-0xc(%ebp)
0810be6f +0x8f:  cmpl   $0x0,-0xc(%ebp)
0810be73 +0x93:  je     0810bea2 <+0xc2>
0810be75 +0x95:  mov    -0xc(%ebp),%eax
0810be78 +0x98:  mov    (%eax),%eax
0810be7a +0x9a:  add    $0x24,%eax
0810be7d +0x9d:  mov    (%eax),%edx
0810be7f +0x9f:  mov    0x14(%ebp),%eax
0810be82 +0xa2:  mov    %eax,0xc(%esp)
0810be86 +0xa6:  mov    0x10(%ebp),%eax
0810be89 +0xa9:  mov    %eax,0x8(%esp)
0810be8d +0xad:  mov    0xc(%ebp),%eax
0810be90 +0xb0:  mov    %eax,0x4(%esp)
0810be94 +0xb4:  mov    -0xc(%ebp),%eax
0810be97 +0xb7:  mov    %eax,(%esp)
0810be9a +0xba:  call   *%edx
0810be9c +0xbc:  jmp    0810bea2 <+0xc2>
0810be9e +0xbe:  nop
0810be9f +0xbf:  jmp    0810bea2 <+0xc2>
0810bea1 +0xc1:  nop
0810bea2 +0xc2:  mov    -0x4(%ebp),%ebx
0810bea5 +0xc5:  leave
0810bea6 +0xc6:  ret
0810bea7 +0xc7:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::process_account_first_login @ 0x810bde0

/* EventClassify::CEventScriptMng::process_account_first_login(int, CUser*, std::bitset<32u>) */

void __thiscall
EventClassify::CEventScriptMng::process_account_first_login
          (CEventScriptMng *this,int param_1,int param_2,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  reference local_18 [8];
  int *local_10;
  
  if ((param_2 != 0) && (cVar1 = is_eventing(this,param_1), cVar1 == '\x01')) {
    get_convert_to_user_confirmflag(this,param_1);
    std::bitset<32u>::operator[]((uint)local_18);
    bVar2 = std::bitset::reference::operator_cast_to_bool(local_18);
    std::bitset<32u>::reference::~reference((reference *)local_18);
    if ((!bVar2) && (local_10 = (int *)get_event_entity((int)this), local_10 != (int *)0x0)) {
      (**(code **)(*local_10 + 0x24))(local_10,param_1,param_2,param_4);
    }
  }
  return;
}
```
