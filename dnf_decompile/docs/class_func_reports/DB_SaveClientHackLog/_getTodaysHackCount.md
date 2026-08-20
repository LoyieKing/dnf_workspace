# _getTodaysHackCount

`_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt`

`DB_SaveClientHackLog::_getTodaysHackCount(MySQL*, unsigned int, unsigned short)`

| 类 | 地址 |
|---|---|
| `DB_SaveClientHackLog` | `0x08421d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08421d50  _ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt
#           DB_SaveClientHackLog::_getTodaysHackCount(MySQL*, unsigned int, unsigned short)
# range [0x08421d50, 0x08421e39]
08421d50 +0x00:  push   %ebp
08421d51 +0x01:  mov    %esp,%ebp
08421d53 +0x03:  push   %ebx
08421d54 +0x04:  sub    $0x34,%esp
08421d57 +0x07:  mov    0x14(%ebp),%eax
08421d5a +0x0a:  mov    %ax,-0x1c(%ebp)
08421d5e +0x0e:  movl   $0x0,-0xc(%ebp)
08421d65 +0x15:  movzwl -0x1c(%ebp),%ebx
08421d69 +0x19:  movl   $0x0,0x4(%esp)
08421d71 +0x21:  mov    0x10(%ebp),%eax
08421d74 +0x24:  mov    %eax,(%esp)
08421d77 +0x27:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08421d7c +0x2c:  mov    %ebx,0xc(%esp)
08421d80 +0x30:  mov    %eax,0x8(%esp)
08421d84 +0x34:  movl   $"seLect cnt from dnf_hack_log where m_id=%s and hack_type=%d and occ_date=CAST(DATE_FORMAT(now(), '%%Y-%%m-%%d') AS CHAR)",0x4(%esp)
08421d8c +0x3c:  mov    0xc(%ebp),%eax
08421d8f +0x3f:  mov    %eax,(%esp)
08421d92 +0x42:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08421d97 +0x47:  movl   $0x1,0x4(%esp)
08421d9f +0x4f:  mov    0xc(%ebp),%eax
08421da2 +0x52:  mov    %eax,(%esp)
08421da5 +0x55:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08421daa +0x5a:  xor    $0x1,%eax
08421dad +0x5d:  test   %al,%al
08421daf +0x5f:  jne    08421dc1 <+0x71>
08421db1 +0x61:  mov    0xc(%ebp),%eax
08421db4 +0x64:  mov    %eax,(%esp)
08421db7 +0x67:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08421dbc +0x6c:  cmp    $0x1,%eax
08421dbf +0x6f:  je     08421dc8 <+0x78>
08421dc1 +0x71:  mov    $0x1,%eax
08421dc6 +0x76:  jmp    08421dcd <+0x7d>
08421dc8 +0x78:  mov    $0x0,%eax
08421dcd +0x7d:  test   %al,%al
08421dcf +0x7f:  je     08421dd8 <+0x88>
08421dd1 +0x81:  mov    $0x0,%eax
08421dd6 +0x86:  jmp    08421e33 <+0xe3>
08421dd8 +0x88:  mov    0xc(%ebp),%eax
08421ddb +0x8b:  mov    %eax,(%esp)
08421dde +0x8e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08421de3 +0x93:  xor    $0x1,%eax
08421de6 +0x96:  test   %al,%al
08421de8 +0x98:  je     08421df1 <+0xa1>
08421dea +0x9a:  mov    $0x0,%eax
08421def +0x9f:  jmp    08421e33 <+0xe3>
08421df1 +0xa1:  lea    -0xc(%ebp),%eax
08421df4 +0xa4:  mov    %eax,0x8(%esp)
08421df8 +0xa8:  movl   $0x0,0x4(%esp)
08421e00 +0xb0:  mov    0xc(%ebp),%eax
08421e03 +0xb3:  mov    %eax,(%esp)
08421e06 +0xb6:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08421e0b +0xbb:  xor    $0x1,%eax
08421e0e +0xbe:  test   %al,%al
08421e10 +0xc0:  jne    08421e19 <+0xc9>
08421e12 +0xc2:  mov    -0xc(%ebp),%eax
08421e15 +0xc5:  test   %eax,%eax
08421e17 +0xc7:  jne    08421e20 <+0xd0>
08421e19 +0xc9:  mov    $0x1,%eax
08421e1e +0xce:  jmp    08421e25 <+0xd5>
08421e20 +0xd0:  mov    $0x0,%eax
08421e25 +0xd5:  test   %al,%al
08421e27 +0xd7:  je     08421e30 <+0xe0>
08421e29 +0xd9:  mov    $0x0,%eax
08421e2e +0xde:  jmp    08421e33 <+0xe3>
08421e30 +0xe0:  mov    -0xc(%ebp),%eax
08421e33 +0xe3:  add    $0x34,%esp
08421e36 +0xe6:  pop    %ebx
08421e37 +0xe7:  pop    %ebp
08421e38 +0xe8:  ret
08421e39 +0xe9:  nop
```

## 反编译 C

```c
// DB_SaveClientHackLog::_getTodaysHackCount @ 0x8421d50

/* DB_SaveClientHackLog::_getTodaysHackCount(MySQL*, unsigned int, unsigned short) */

int __thiscall
DB_SaveClientHackLog::_getTodaysHackCount
          (DB_SaveClientHackLog *this,MySQL *param_1,uint param_2,ushort param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10 [2];
  
  local_10[0] = 0;
  uVar3 = NumberToString(param_2,0);
  MySQL::set_query(param_1,
                   "seLect cnt from dnf_hack_log where m_id=%s and hack_type=%d and occ_date=CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR)"
                   ,uVar3,(uint)param_3);
  cVar2 = MySQL::exec(param_1,true);
  if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(param_1), iVar4 == 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_10[0] = 0;
  }
  else {
    cVar2 = MySQL::fetch(param_1);
    if (cVar2 == '\x01') {
      cVar2 = MySQL::get_int(param_1,0,local_10);
      if ((cVar2 == '\x01') && (local_10[0] != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_10[0] = 0;
      }
    }
    else {
      local_10[0] = 0;
    }
  }
  return local_10[0];
}
```
