# InitLoginState

`_ZN12CDataManager14InitLoginStateE17ENUM_SERVER_GROUPi`

`CDataManager::InitLoginState(ENUM_SERVER_GROUP, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360306` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360306  _ZN12CDataManager14InitLoginStateE17ENUM_SERVER_GROUPi
#           CDataManager::InitLoginState(ENUM_SERVER_GROUP, int)
# range [0x08360306, 0x083603ff]
08360306 +0x00:  push   %ebp
08360307 +0x01:  mov    %esp,%ebp
08360309 +0x03:  sub    $0x28,%esp
0836030c +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08360311 +0x0b:  movl   $0x0,0x8(%esp)
08360319 +0x13:  movl   $0x6,0x4(%esp)
08360321 +0x1b:  mov    %eax,(%esp)
08360324 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08360329 +0x23:  mov    %eax,-0xc(%ebp)
0836032c +0x26:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08360331 +0x2b:  mov    %eax,(%esp)
08360334 +0x2e:  call   08375f4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff18>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff18
08360339 +0x33:  test   %eax,%eax
0836033b +0x35:  je     0836034f <+0x49>
0836033d +0x37:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08360342 +0x3c:  mov    %eax,(%esp)
08360345 +0x3f:  call   08375f4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff18>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff18
0836034a +0x44:  cmp    $0x2,%eax
0836034d +0x47:  jne    08360356 <+0x50>
0836034f +0x49:  mov    $0x1,%eax
08360354 +0x4e:  jmp    0836035b <+0x55>
08360356 +0x50:  mov    $0x0,%eax
0836035b +0x55:  test   %al,%al
0836035d +0x57:  je     08360398 <+0x92>
0836035f +0x59:  mov    0xc(%ebp),%eax
08360362 +0x5c:  mov    0x10(%ebp),%edx
08360365 +0x5f:  mov    %edx,0xc(%esp)
08360369 +0x63:  mov    %eax,0x8(%esp)
0836036d +0x67:  movl   $"upDate login_account_%d set login_status=0 where m_channel_no=%d",0x4(%esp)
08360375 +0x6f:  mov    -0xc(%ebp),%eax
08360378 +0x72:  mov    %eax,(%esp)
0836037b +0x75:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08360380 +0x7a:  movl   $0x1,0x4(%esp)
08360388 +0x82:  mov    -0xc(%ebp),%eax
0836038b +0x85:  mov    %eax,(%esp)
0836038e +0x88:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08360393 +0x8d:  mov    %al,-0xd(%ebp)
08360396 +0x90:  jmp    083603fa <+0xf4>
08360398 +0x92:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0836039d +0x97:  mov    %eax,(%esp)
083603a0 +0x9a:  call   08375f4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff18>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff18
083603a5 +0x9f:  cmp    $0x1,%eax
083603a8 +0xa2:  sete   %al
083603ab +0xa5:  test   %al,%al
083603ad +0xa7:  je     083603fa <+0xf4>
083603af +0xa9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
083603b4 +0xae:  mov    0x1b0(%eax),%eax
083603ba +0xb4:  cmp    $0x1,%eax
083603bd +0xb7:  sete   %al
083603c0 +0xba:  test   %al,%al
083603c2 +0xbc:  je     083603f6 <+0xf0>
083603c4 +0xbe:  mov    0xc(%ebp),%eax
083603c7 +0xc1:  mov    %eax,0x8(%esp)
083603cb +0xc5:  movl   $"upDate login_account_%d set login_status=0",0x4(%esp)
083603d3 +0xcd:  mov    -0xc(%ebp),%eax
083603d6 +0xd0:  mov    %eax,(%esp)
083603d9 +0xd3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083603de +0xd8:  movl   $0x1,0x4(%esp)
083603e6 +0xe0:  mov    -0xc(%ebp),%eax
083603e9 +0xe3:  mov    %eax,(%esp)
083603ec +0xe6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083603f1 +0xeb:  mov    %al,-0xd(%ebp)
083603f4 +0xee:  jmp    083603fa <+0xf4>
083603f6 +0xf0:  movb   $0x1,-0xd(%ebp)
083603fa +0xf4:  movzbl -0xd(%ebp),%eax
083603fe +0xf8:  leave
083603ff +0xf9:  ret
```

## 反编译 C

```c
// CDataManager::InitLoginState @ 0x8360306

/* CDataManager::InitLoginState(ENUM_SERVER_GROUP, int) */

undefined1 __thiscall
CDataManager::InitLoginState(undefined4 this,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  MySQL *this_00;
  CEnvironment *pCVar2;
  int iVar3;
  undefined1 local_11;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pCVar2 = (CEnvironment *)G_CEnvironment();
  iVar3 = CEnvironment::get_operation_type(pCVar2);
  if (iVar3 != 0) {
    pCVar2 = (CEnvironment *)G_CEnvironment();
    iVar3 = CEnvironment::get_operation_type(pCVar2);
    if (iVar3 != 2) {
      bVar1 = false;
      goto LAB_0836035b;
    }
  }
  bVar1 = true;
LAB_0836035b:
  if (bVar1) {
    MySQL::set_query(this_00,"upDate login_account_%d set login_status=0 where m_channel_no=%d",
                     param_2,param_3);
    local_11 = MySQL::exec(this_00,true);
  }
  else {
    pCVar2 = (CEnvironment *)G_CEnvironment();
    iVar3 = CEnvironment::get_operation_type(pCVar2);
    if (iVar3 == 1) {
      iVar3 = G_CEnvironment();
      if (*(int *)(iVar3 + 0x1b0) == 1) {
        MySQL::set_query(this_00,"upDate login_account_%d set login_status=0",param_2);
        local_11 = MySQL::exec(this_00,true);
      }
      else {
        local_11 = 1;
      }
    }
  }
  return local_11;
}
```
