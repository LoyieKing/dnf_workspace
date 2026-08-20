# GiveItemsReturnUser

`_ZN5CUser19GiveItemsReturnUserEv`

`CUser::GiveItemsReturnUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692000  _ZN5CUser19GiveItemsReturnUserEv
#           CUser::GiveItemsReturnUser()
# range [0x08692000, 0x0869213f]
08692000 +0x000:  push   %ebp
08692001 +0x001:  mov    %esp,%ebp
08692003 +0x003:  push   %edi
08692004 +0x004:  push   %esi
08692005 +0x005:  push   %ebx
08692006 +0x006:  sub    $0x8c,%esp
0869200c +0x00c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08692011 +0x011:  mov    0xb548(%eax),%eax
08692017 +0x017:  mov    %eax,-0x28(%ebp)
0869201a +0x01a:  movl   $0x1,-0x24(%ebp)
08692021 +0x021:  lea    -0x65(%ebp),%eax
08692024 +0x024:  mov    %eax,(%esp)
08692027 +0x027:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0869202c +0x02c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08692031 +0x031:  mov    -0x28(%ebp),%edx
08692034 +0x034:  mov    %edx,0x4(%esp)
08692038 +0x038:  mov    %eax,(%esp)
0869203b +0x03b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08692040 +0x040:  mov    %eax,-0x20(%ebp)
08692043 +0x043:  cmpl   $0x0,-0x20(%ebp)
08692047 +0x047:  je     08692134 <+0x134>
0869204d +0x04d:  mov    -0x28(%ebp),%eax
08692050 +0x050:  mov    %eax,-0x63(%ebp)
08692053 +0x053:  mov    -0x20(%ebp),%eax
08692056 +0x056:  mov    (%eax),%eax
08692058 +0x058:  add    $0x8,%eax
0869205b +0x05b:  mov    (%eax),%edx
0869205d +0x05d:  lea    -0x65(%ebp),%eax
08692060 +0x060:  mov    %eax,0x4(%esp)
08692064 +0x064:  mov    -0x20(%ebp),%eax
08692067 +0x067:  mov    %eax,(%esp)
0869206a +0x06a:  call   *%edx
0869206c +0x06c:  mov    -0x24(%ebp),%eax
0869206f +0x06f:  mov    %eax,0x4(%esp)
08692073 +0x073:  lea    -0x65(%ebp),%eax
08692076 +0x076:  mov    %eax,(%esp)
08692079 +0x079:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0869207e +0x07e:  movl   $0x0,0xc(%esp)
08692086 +0x086:  movl   $"return_user_msg_1",0x8(%esp)
0869208e +0x08e:  movl   $0x4,0x4(%esp)
08692096 +0x096:  movl   $&g_scriptStringManager_,(%esp)
0869209d +0x09d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086920a2 +0x0a2:  mov    %eax,-0x1c(%ebp)
086920a5 +0x0a5:  mov    0x8(%ebp),%eax
086920a8 +0x0a8:  mov    %eax,(%esp)
086920ab +0x0ab:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086920b0 +0x0b0:  mov    %eax,%esi
086920b2 +0x0b2:  mov    -0x1c(%ebp),%eax
086920b5 +0x0b5:  mov    %eax,(%esp)
086920b8 +0x0b8:  call   0807e3b0 <_init+0xca8>
086920bd +0x0bd:  mov    %eax,%edi
086920bf +0x0bf:  mov    0x8(%ebp),%eax
086920c2 +0x0c2:  mov    %eax,(%esp)
086920c5 +0x0c5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086920ca +0x0ca:  mov    %eax,%ebx
086920cc +0x0cc:  movl   $0x0,0xc(%esp)
086920d4 +0x0d4:  movl   $"return_user_msg_title",0x8(%esp)
086920dc +0x0dc:  movl   $0x4,0x4(%esp)
086920e4 +0x0e4:  movl   $&g_scriptStringManager_,(%esp)
086920eb +0x0eb:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086920f0 +0x0f0:  movl   $0x0,0x24(%esp)
086920f8 +0x0f8:  movl   $0x0,0x20(%esp)
08692100 +0x100:  mov    %esi,0x1c(%esp)
08692104 +0x104:  movl   $0x7,0x18(%esp)
0869210c +0x10c:  mov    %edi,0x14(%esp)
08692110 +0x110:  mov    -0x1c(%ebp),%edx
08692113 +0x113:  mov    %edx,0x10(%esp)
08692117 +0x117:  mov    %ebx,0xc(%esp)
0869211b +0x11b:  movl   $&_ZL14gUnicodeBuffer+0xe174,0x8(%esp)
08692123 +0x123:  lea    -0x65(%ebp),%edx
08692126 +0x126:  mov    %edx,0x4(%esp)
0869212a +0x12a:  mov    %eax,(%esp)
0869212d +0x12d:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08692132 +0x132:  jmp    08692135 <+0x135>
08692134 +0x134:  nop
08692135 +0x135:  add    $0x8c,%esp
0869213b +0x13b:  pop    %ebx
0869213c +0x13c:  pop    %esi
0869213d +0x13d:  pop    %edi
0869213e +0x13e:  pop    %ebp
0869213f +0x13f:  ret
```

## 反编译 C

```c
// CUser::GiveItemsReturnUser @ 0x8692000

/* CUser::GiveItemsReturnUser() */

void __thiscall CUser::GiveItemsReturnUser(CUser *this)

{
  int iVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Inven_Item local_69 [2];
  int local_67;
  int local_2c;
  int local_28;
  int *local_24;
  char *local_20;
  
  iVar1 = G_CDataManager();
  local_2c = *(int *)(iVar1 + 0xb548);
  local_28 = 1;
  Inven_Item::Inven_Item(local_69);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = (int *)CDataManager::find_item(this_00,local_2c);
  if (local_24 != (int *)0x0) {
    local_67 = local_2c;
    (**(code **)(*local_24 + 8))(local_24,local_69);
    Inven_Item::set_add_info(local_69,local_28);
    local_20 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "return_user_msg_1",(bool *)0x0);
    uVar2 = GetServerGroup(this);
    sVar3 = strlen(local_20);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar5 = RDARScriptStringManager::findString
                      ((RDARScriptStringManager *)g_scriptStringManager_,4,"return_user_msg_title",
                       (bool *)0x0);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (uVar5,local_69,100000,uVar4,local_20,sVar3,7,uVar2,0,0);
  }
  return;
}
```
