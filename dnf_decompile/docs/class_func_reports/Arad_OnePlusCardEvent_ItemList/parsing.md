# parsing

`_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc`

`Arad_OnePlusCardEvent_ItemList::parsing(char*)`

| 类 | 地址 |
|---|---|
| `Arad_OnePlusCardEvent_ItemList` | `0x081a36fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a36fc  _ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc
#           Arad_OnePlusCardEvent_ItemList::parsing(char*)
# range [0x081a36fc, 0x081a398d]
081a36fc +0x000:  push   %ebp
081a36fd +0x001:  mov    %esp,%ebp
081a36ff +0x003:  push   %esi
081a3700 +0x004:  push   %ebx
081a3701 +0x005:  sub    $0x90,%esp
081a3707 +0x00b:  lea    -0x78(%ebp),%eax
081a370a +0x00e:  mov    %eax,(%esp)
081a370d +0x011:  call   0817b474 <_ZN11Arad_ScriptC1Ev>  ; Arad_Script::Arad_Script()
081a3712 +0x016:  movl   $"item",0x8(%esp)
081a371a +0x01e:  mov    0xc(%ebp),%eax
081a371d +0x021:  mov    %eax,0x4(%esp)
081a3721 +0x025:  lea    -0x78(%ebp),%eax
081a3724 +0x028:  mov    %eax,(%esp)
081a3727 +0x02b:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a372c +0x030:  xor    $0x1,%eax
081a372f +0x033:  test   %al,%al
081a3731 +0x035:  je     081a373d <+0x41>
081a3733 +0x037:  mov    $0x1db,%ebx
081a3738 +0x03c:  jmp    081a3976 <+0x27a>
081a373d +0x041:  lea    -0x78(%ebp),%eax
081a3740 +0x044:  mov    %eax,(%esp)
081a3743 +0x047:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3748 +0x04c:  test   %eax,%eax
081a374a +0x04e:  sete   %al
081a374d +0x051:  test   %al,%al
081a374f +0x053:  je     081a375b <+0x5f>
081a3751 +0x055:  mov    $0x0,%ebx
081a3756 +0x05a:  jmp    081a3976 <+0x27a>
081a375b +0x05f:  movl   $0x0,-0x18(%ebp)
081a3762 +0x066:  jmp    081a383e <+0x142>
081a3767 +0x06b:  movw   $0x0,-0x12(%ebp)
081a376d +0x071:  movl   $0xffffffff,-0x10(%ebp)
081a3774 +0x078:  movl   $"web_id",0x8(%esp)
081a377c +0x080:  mov    -0x18(%ebp),%eax
081a377f +0x083:  mov    %eax,0x4(%esp)
081a3783 +0x087:  lea    -0x78(%ebp),%eax
081a3786 +0x08a:  mov    %eax,(%esp)
081a3789 +0x08d:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a378e +0x092:  mov    %ax,-0x12(%ebp)
081a3792 +0x096:  movl   $"item_index",0x8(%esp)
081a379a +0x09e:  mov    -0x18(%ebp),%eax
081a379d +0x0a1:  mov    %eax,0x4(%esp)
081a37a1 +0x0a5:  lea    -0x78(%ebp),%eax
081a37a4 +0x0a8:  mov    %eax,(%esp)
081a37a7 +0x0ab:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a37ac +0x0b0:  mov    %eax,-0x10(%ebp)
081a37af +0x0b3:  movzwl -0x12(%ebp),%eax
081a37b3 +0x0b7:  mov    %eax,0x4(%esp)
081a37b7 +0x0bb:  mov    0x8(%ebp),%eax
081a37ba +0x0be:  mov    %eax,(%esp)
081a37bd +0x0c1:  call   081a3a6e <_ZN30Arad_OnePlusCardEvent_ItemList9find_itemEt>  ; Arad_OnePlusCardEvent_ItemList::find_item(unsigned short)
081a37c2 +0x0c6:  test   %al,%al
081a37c4 +0x0c8:  je     081a380b <+0x10f>
081a37c6 +0x0ca:  movzwl -0x12(%ebp),%eax
081a37ca +0x0ce:  mov    -0x10(%ebp),%edx
081a37cd +0x0d1:  mov    %edx,0x18(%esp)
081a37d1 +0x0d5:  mov    %eax,0x14(%esp)
081a37d5 +0x0d9:  movl   $"[ERROR] already exist data id OnePlusCardEvent(id:%d, item:%u)",0x10(%esp)
081a37dd +0x0e1:  movl   $0x1ea,0xc(%esp)
081a37e5 +0x0e9:  movl   $&_ZZN30Arad_OnePlusCardEvent_ItemList7parsingEPcE19__PRETTY_FUNCTION__,0x8(%esp)
081a37ed +0x0f1:  movl   $"localjapan/Arad_Script_Loader.cpp",0x4(%esp)
081a37f5 +0x0f9:  movl   $0x1,(%esp)
081a37fc +0x100:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a3801 +0x105:  mov    $0x1eb,%ebx
081a3806 +0x10a:  jmp    081a3976 <+0x27a>
081a380b +0x10f:  movzwl -0x12(%ebp),%eax
081a380f +0x113:  mov    -0x10(%ebp),%edx
081a3812 +0x116:  mov    %edx,0x8(%esp)
081a3816 +0x11a:  mov    %eax,0x4(%esp)
081a381a +0x11e:  lea    -0x20(%ebp),%eax
081a381d +0x121:  mov    %eax,(%esp)
081a3820 +0x124:  call   081a41e8 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x243>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x243
081a3825 +0x129:  mov    0x8(%ebp),%eax
081a3828 +0x12c:  lea    0x4(%eax),%edx
081a382b +0x12f:  lea    -0x20(%ebp),%eax
081a382e +0x132:  mov    %eax,0x4(%esp)
081a3832 +0x136:  mov    %edx,(%esp)
081a3835 +0x139:  call   081a49e6 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xa41>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xa41
081a383a +0x13e:  addl   $0x1,-0x18(%ebp)
081a383e +0x142:  lea    -0x78(%ebp),%eax
081a3841 +0x145:  mov    %eax,(%esp)
081a3844 +0x148:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3849 +0x14d:  cmp    -0x18(%ebp),%eax
081a384c +0x150:  setg   %al
081a384f +0x153:  test   %al,%al
081a3851 +0x155:  jne    081a3767 <+0x6b>
081a3857 +0x15b:  movl   $&g_dnfLex,(%esp)
081a385e +0x162:  call   08ace970 <_ZN13DNFLexWrapper20getInputStreamBufferEv>  ; DNFLexWrapper::getInputStreamBuffer()
081a3863 +0x167:  movl   $"limited_map",0x8(%esp)
081a386b +0x16f:  mov    %eax,0x4(%esp)
081a386f +0x173:  lea    -0x78(%ebp),%eax
081a3872 +0x176:  mov    %eax,(%esp)
081a3875 +0x179:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a387a +0x17e:  xor    $0x1,%eax
081a387d +0x181:  test   %al,%al
081a387f +0x183:  je     081a388b <+0x18f>
081a3881 +0x185:  mov    $0x1f3,%ebx
081a3886 +0x18a:  jmp    081a3976 <+0x27a>
081a388b +0x18f:  lea    -0x78(%ebp),%eax
081a388e +0x192:  mov    %eax,(%esp)
081a3891 +0x195:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3896 +0x19a:  test   %eax,%eax
081a3898 +0x19c:  sete   %al
081a389b +0x19f:  test   %al,%al
081a389d +0x1a1:  je     081a38a9 <+0x1ad>
081a389f +0x1a3:  mov    $0x0,%ebx
081a38a4 +0x1a8:  jmp    081a3976 <+0x27a>
081a38a9 +0x1ad:  movl   $0x0,-0xc(%ebp)
081a38b0 +0x1b4:  jmp    081a393b <+0x23f>
081a38b5 +0x1b9:  movl   $"index",0x8(%esp)
081a38bd +0x1c1:  mov    -0xc(%ebp),%eax
081a38c0 +0x1c4:  mov    %eax,0x4(%esp)
081a38c4 +0x1c8:  lea    -0x78(%ebp),%eax
081a38c7 +0x1cb:  mov    %eax,(%esp)
081a38ca +0x1ce:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a38cf +0x1d3:  mov    %eax,-0x24(%ebp)
081a38d2 +0x1d6:  mov    -0x24(%ebp),%eax
081a38d5 +0x1d9:  mov    %eax,0x4(%esp)
081a38d9 +0x1dd:  mov    0x8(%ebp),%eax
081a38dc +0x1e0:  mov    %eax,(%esp)
081a38df +0x1e3:  call   081a3ab2 <_ZN30Arad_OnePlusCardEvent_ItemList14is_limited_mapEj>  ; Arad_OnePlusCardEvent_ItemList::is_limited_map(unsigned int)
081a38e4 +0x1e8:  test   %al,%al
081a38e6 +0x1ea:  je     081a3922 <+0x226>
081a38e8 +0x1ec:  mov    -0x24(%ebp),%eax
081a38eb +0x1ef:  mov    %eax,0x14(%esp)
081a38ef +0x1f3:  movl   $"[ERROR] already exist limited map index (map:%u)",0x10(%esp)
081a38f7 +0x1fb:  movl   $0x1fe,0xc(%esp)
081a38ff +0x203:  movl   $&_ZZN30Arad_OnePlusCardEvent_ItemList7parsingEPcE19__PRETTY_FUNCTION__,0x8(%esp)
081a3907 +0x20b:  movl   $"localjapan/Arad_Script_Loader.cpp",0x4(%esp)
081a390f +0x213:  movl   $0x1,(%esp)
081a3916 +0x21a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081a391b +0x21f:  mov    $0x1ff,%ebx
081a3920 +0x224:  jmp    081a3976 <+0x27a>
081a3922 +0x226:  mov    0x8(%ebp),%eax
081a3925 +0x229:  lea    0x10(%eax),%edx
081a3928 +0x22c:  lea    -0x24(%ebp),%eax
081a392b +0x22f:  mov    %eax,0x4(%esp)
081a392f +0x233:  mov    %edx,(%esp)
081a3932 +0x236:  call   080e24f0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x296>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x296
081a3937 +0x23b:  addl   $0x1,-0xc(%ebp)
081a393b +0x23f:  lea    -0x78(%ebp),%eax
081a393e +0x242:  mov    %eax,(%esp)
081a3941 +0x245:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a3946 +0x24a:  cmp    -0xc(%ebp),%eax
081a3949 +0x24d:  setg   %al
081a394c +0x250:  test   %al,%al
081a394e +0x252:  jne    081a38b5 <+0x1b9>
081a3954 +0x258:  mov    $0x0,%ebx
081a3959 +0x25d:  jmp    081a3976 <+0x27a>
081a395b +0x25f:  mov    %edx,%ebx
081a395d +0x261:  mov    %eax,%esi
081a395f +0x263:  lea    -0x78(%ebp),%eax
081a3962 +0x266:  mov    %eax,(%esp)
081a3965 +0x269:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a396a +0x26e:  mov    %esi,%eax
081a396c +0x270:  mov    %ebx,%edx
081a396e +0x272:  mov    %eax,(%esp)
081a3971 +0x275:  call   08ae3750 <_Unwind_Resume>
081a3976 +0x27a:  lea    -0x78(%ebp),%eax
081a3979 +0x27d:  mov    %eax,(%esp)
081a397c +0x280:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a3981 +0x285:  mov    %ebx,%eax
081a3983 +0x287:  add    $0x90,%esp
081a3989 +0x28d:  pop    %ebx
081a398a +0x28e:  pop    %esi
081a398b +0x28f:  pop    %ebp
081a398c +0x290:  ret
081a398d +0x291:  nop
```

## 反编译 C

```c
// Arad_OnePlusCardEvent_ItemList::parsing @ 0x81a36fc

/* Arad_OnePlusCardEvent_ItemList::parsing(char*) */

undefined4 __thiscall
Arad_OnePlusCardEvent_ItemList::parsing(Arad_OnePlusCardEvent_ItemList *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  Arad_Script local_7c [84];
  uint local_28;
  Data local_24 [8];
  int local_1c;
  ushort local_16;
  ulong local_14;
  int local_10;
  
  Arad_Script::Arad_Script(local_7c);
                    /* try { // try from 081a3727 to 081a3936 has its CatchHandler @ 081a395b */
  cVar1 = Arad_Script::Load(local_7c,param_1,"item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_7c);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_1c = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_7c);
        if (iVar2 <= local_1c) break;
        local_16 = 0;
        local_14 = 0xffffffff;
        local_16 = Arad_Script::GetInt(local_7c,local_1c,"web_id");
        local_14 = Arad_Script::GetInt(local_7c,local_1c,"item_index");
        cVar1 = find_item(this,local_16);
        if (cVar1 != '\0') {
          LogManager::logFormat
                    (1,"localjapan/Arad_Script_Loader.cpp",
                     "virtual int Arad_OnePlusCardEvent_ItemList::parsing(char*)",0x1ea,
                     "[ERROR] already exist data id OnePlusCardEvent(id:%d, item:%u)",(uint)local_16
                     ,local_14);
          uVar4 = 0x1eb;
          goto LAB_081a3976;
        }
        Data::Data(local_24,local_16,local_14);
        std::
        vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
        ::push_back((vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
                     *)(this + 4),local_24);
        local_1c = local_1c + 1;
      }
      pcVar3 = DNFLexWrapper::getInputStreamBuffer((DNFLexWrapper *)g_dnfLex);
      cVar1 = Arad_Script::Load(local_7c,pcVar3,"limited_map");
      if (cVar1 == '\x01') {
        iVar2 = Arad_Script::GetRowNum(local_7c);
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          local_10 = 0;
          while( true ) {
            iVar2 = Arad_Script::GetRowNum(local_7c);
            if (iVar2 <= local_10) break;
            local_28 = Arad_Script::GetInt(local_7c,local_10,"index");
            cVar1 = is_limited_map((uint)this);
            if (cVar1 != '\0') {
              LogManager::logFormat
                        (1,"localjapan/Arad_Script_Loader.cpp",
                         "virtual int Arad_OnePlusCardEvent_ItemList::parsing(char*)",0x1fe,
                         "[ERROR] already exist limited map index (map:%u)",local_28);
              uVar4 = 0x1ff;
              goto LAB_081a3976;
            }
            std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x10),&local_28)
            ;
            local_10 = local_10 + 1;
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 499;
      }
    }
  }
  else {
    uVar4 = 0x1db;
  }
LAB_081a3976:
  Arad_Script::~Arad_Script(local_7c);
  return uVar4;
}
```
