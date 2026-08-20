# LoadAuraAvatarOption

`_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadAuraAvatarOption(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x0840838e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840838e  _ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadAuraAvatarOption(SIG_LOAD_ETC*)
# range [0x0840838e, 0x084084df]
0840838e +0x000:  push   %ebp
0840838f +0x001:  mov    %esp,%ebp
08408391 +0x003:  sub    $0x38,%esp
08408394 +0x006:  mov    0xc(%ebp),%eax
08408397 +0x009:  add    $0xd730,%eax
0840839c +0x00e:  mov    %eax,(%esp)
0840839f +0x011:  call   0844d616 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x22c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x22c
084083a4 +0x016:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084083a9 +0x01b:  movl   $0x0,0x8(%esp)
084083b1 +0x023:  movl   $0x2,0x4(%esp)
084083b9 +0x02b:  mov    %eax,(%esp)
084083bc +0x02e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084083c1 +0x033:  mov    %eax,-0x18(%ebp)
084083c4 +0x036:  mov    0xc(%ebp),%eax
084083c7 +0x039:  mov    0x4(%eax),%eax
084083ca +0x03c:  mov    %eax,0x8(%esp)
084083ce +0x040:  movl   $"seLect option_type, value_1 from aura_avatar_option where charac_no=%u",0x4(%esp)
084083d6 +0x048:  mov    -0x18(%ebp),%eax
084083d9 +0x04b:  mov    %eax,(%esp)
084083dc +0x04e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084083e1 +0x053:  movl   $0x1,0x4(%esp)
084083e9 +0x05b:  mov    -0x18(%ebp),%eax
084083ec +0x05e:  mov    %eax,(%esp)
084083ef +0x061:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084083f4 +0x066:  xor    $0x1,%eax
084083f7 +0x069:  test   %al,%al
084083f9 +0x06b:  je     08408405 <+0x77>
084083fb +0x06d:  mov    $0x0,%eax
08408400 +0x072:  jmp    084084de <+0x150>
08408405 +0x077:  mov    -0x18(%ebp),%eax
08408408 +0x07a:  mov    %eax,(%esp)
0840840b +0x07d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08408410 +0x082:  mov    %eax,-0x14(%ebp)
08408413 +0x085:  cmpl   $0x0,-0x14(%ebp)
08408417 +0x089:  jne    08408423 <+0x95>
08408419 +0x08b:  mov    $0x1,%eax
0840841e +0x090:  jmp    084084de <+0x150>
08408423 +0x095:  movb   $0x0,-0xd(%ebp)
08408427 +0x099:  movl   $0x0,-0xc(%ebp)
0840842e +0x0a0:  jmp    084084c5 <+0x137>
08408433 +0x0a5:  mov    -0x18(%ebp),%eax
08408436 +0x0a8:  mov    %eax,(%esp)
08408439 +0x0ab:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840843e +0x0b0:  mov    %al,-0xd(%ebp)
08408441 +0x0b3:  movzbl -0xd(%ebp),%eax
08408445 +0x0b7:  xor    $0x1,%eax
08408448 +0x0ba:  test   %al,%al
0840844a +0x0bc:  jne    084084d8 <+0x14a>
08408450 +0x0c2:  lea    -0x1c(%ebp),%eax
08408453 +0x0c5:  mov    %eax,0x8(%esp)
08408457 +0x0c9:  movl   $0x0,0x4(%esp)
0840845f +0x0d1:  mov    -0x18(%ebp),%eax
08408462 +0x0d4:  mov    %eax,(%esp)
08408465 +0x0d7:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840846a +0x0dc:  xor    $0x1,%eax
0840846d +0x0df:  test   %al,%al
0840846f +0x0e1:  je     08408478 <+0xea>
08408471 +0x0e3:  mov    $0x0,%eax
08408476 +0x0e8:  jmp    084084de <+0x150>
08408478 +0x0ea:  lea    -0x20(%ebp),%eax
0840847b +0x0ed:  mov    %eax,0x8(%esp)
0840847f +0x0f1:  movl   $0x1,0x4(%esp)
08408487 +0x0f9:  mov    -0x18(%ebp),%eax
0840848a +0x0fc:  mov    %eax,(%esp)
0840848d +0x0ff:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08408492 +0x104:  xor    $0x1,%eax
08408495 +0x107:  test   %al,%al
08408497 +0x109:  je     084084a0 <+0x112>
08408499 +0x10b:  mov    $0x0,%eax
0840849e +0x110:  jmp    084084de <+0x150>
084084a0 +0x112:  mov    -0x1c(%ebp),%eax
084084a3 +0x115:  test   %eax,%eax
084084a5 +0x117:  js     084084c1 <+0x133>
084084a7 +0x119:  mov    -0x1c(%ebp),%eax
084084aa +0x11c:  cmp    $0x2,%eax
084084ad +0x11f:  jg     084084c1 <+0x133>
084084af +0x121:  mov    -0x1c(%ebp),%ecx
084084b2 +0x124:  mov    -0x20(%ebp),%edx
084084b5 +0x127:  mov    0xc(%ebp),%eax
084084b8 +0x12a:  add    $0x35cc,%ecx
084084be +0x130:  mov    %edx,(%eax,%ecx,4)
084084c1 +0x133:  addl   $0x1,-0xc(%ebp)
084084c5 +0x137:  mov    -0xc(%ebp),%eax
084084c8 +0x13a:  cmp    -0x14(%ebp),%eax
084084cb +0x13d:  setl   %al
084084ce +0x140:  test   %al,%al
084084d0 +0x142:  jne    08408433 <+0xa5>
084084d6 +0x148:  jmp    084084d9 <+0x14b>
084084d8 +0x14a:  nop
084084d9 +0x14b:  mov    $0x1,%eax
084084de +0x150:  leave
084084df +0x151:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadAuraAvatarOption @ 0x840838e

/* DB_LoadEtc::LoadAuraAvatarOption(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadAuraAvatarOption(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  MySQL *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  stAuraAvatarOption::reset((stAuraAvatarOption *)(param_1 + 0xd730));
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_1c,"seLect option_type, value_1 from aura_avatar_option where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_18 = MySQL::get_n_rows(local_1c);
    if (local_18 == 0) {
      uVar2 = 1;
    }
    else {
      local_11 = '\0';
      local_10 = 0;
      while ((local_10 < local_18 && (local_11 = MySQL::fetch(local_1c), local_11 == '\x01'))) {
        cVar1 = MySQL::get_int(local_1c,0,&local_20);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(local_1c,1,&local_24);
        if (cVar1 != '\x01') {
          return 0;
        }
        if ((-1 < local_20) && (local_20 < 3)) {
          *(int *)(param_1 + (local_20 + 0x35cc) * 4) = local_24;
        }
        local_10 = local_10 + 1;
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
