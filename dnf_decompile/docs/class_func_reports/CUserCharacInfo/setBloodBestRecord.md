# setBloodBestRecord

`_ZN15CUserCharacInfo18setBloodBestRecordEjiib`

`CUserCharacInfo::setBloodBestRecord(unsigned int, int, int, bool)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08687fd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687fd8  _ZN15CUserCharacInfo18setBloodBestRecordEjiib
#           CUserCharacInfo::setBloodBestRecord(unsigned int, int, int, bool)
# range [0x08687fd8, 0x0868822f]
08687fd8 +0x000:  push   %ebp
08687fd9 +0x001:  mov    %esp,%ebp
08687fdb +0x003:  push   %ebx
08687fdc +0x004:  sub    $0x54,%esp
08687fdf +0x007:  mov    0x18(%ebp),%eax
08687fe2 +0x00a:  mov    %al,-0x3c(%ebp)
08687fe5 +0x00d:  mov    0x8(%ebp),%eax
08687fe8 +0x010:  mov    0x10(%eax),%eax
08687feb +0x013:  test   %eax,%eax
08687fed +0x015:  je     08688224 <+0x24c>
08687ff3 +0x01b:  cmpl   $0xf,0x10(%ebp)
08687ff7 +0x01f:  jle    08688000 <+0x28>
08687ff9 +0x021:  movl   $0xf,0x10(%ebp)
08688000 +0x028:  mov    0x8(%ebp),%eax
08688003 +0x02b:  mov    0x10(%eax),%eax
08688006 +0x02e:  lea    0xecc(%eax),%ecx
0868800c +0x034:  lea    -0x30(%ebp),%eax
0868800f +0x037:  lea    0x14(%ebp),%edx
08688012 +0x03a:  mov    %edx,0x8(%esp)
08688016 +0x03e:  mov    %ecx,0x4(%esp)
0868801a +0x042:  mov    %eax,(%esp)
0868801d +0x045:  call   0869c3bc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8c11>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8c11
08688022 +0x04a:  sub    $0x4,%esp
08688025 +0x04d:  mov    0x8(%ebp),%eax
08688028 +0x050:  mov    0x10(%eax),%eax
0868802b +0x053:  lea    0xecc(%eax),%edx
08688031 +0x059:  lea    -0x2c(%ebp),%eax
08688034 +0x05c:  mov    %edx,0x4(%esp)
08688038 +0x060:  mov    %eax,(%esp)
0868803b +0x063:  call   0869a9ce <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7223>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7223
08688040 +0x068:  sub    $0x4,%esp
08688043 +0x06b:  lea    -0x2c(%ebp),%eax
08688046 +0x06e:  mov    %eax,0x4(%esp)
0868804a +0x072:  lea    -0x30(%ebp),%eax
0868804d +0x075:  mov    %eax,(%esp)
08688050 +0x078:  call   0869c3e8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8c3d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8c3d
08688055 +0x07d:  test   %al,%al
08688057 +0x07f:  je     086880fd <+0x125>
0868805d +0x085:  movzbl -0x3c(%ebp),%eax
08688061 +0x089:  xor    $0x1,%eax
08688064 +0x08c:  test   %al,%al
08688066 +0x08e:  je     0868807b <+0xa3>
08688068 +0x090:  movl   $0x1,0x4(%esp)
08688070 +0x098:  mov    0x8(%ebp),%eax
08688073 +0x09b:  mov    %eax,(%esp)
08688076 +0x09e:  call   086961a8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x29fd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x29fd
0868807b +0x0a3:  mov    0x10(%ebp),%eax
0868807e +0x0a6:  mov    %eax,-0x38(%ebp)
08688081 +0x0a9:  mov    0xc(%ebp),%eax
08688084 +0x0ac:  mov    %eax,-0x34(%ebp)
08688087 +0x0af:  lea    -0x14(%ebp),%eax
0868808a +0x0b2:  lea    -0x38(%ebp),%edx
0868808d +0x0b5:  mov    %edx,0x8(%esp)
08688091 +0x0b9:  lea    0x14(%ebp),%edx
08688094 +0x0bc:  mov    %edx,0x4(%esp)
08688098 +0x0c0:  mov    %eax,(%esp)
0868809b +0x0c3:  call   0869c3fc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8c51>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8c51
086880a0 +0x0c8:  sub    $0x4,%esp
086880a3 +0x0cb:  lea    -0x14(%ebp),%eax
086880a6 +0x0ce:  mov    %eax,0x4(%esp)
086880aa +0x0d2:  lea    -0x20(%ebp),%eax
086880ad +0x0d5:  mov    %eax,(%esp)
086880b0 +0x0d8:  call   0869c43a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8c8f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8c8f
086880b5 +0x0dd:  mov    0x8(%ebp),%eax
086880b8 +0x0e0:  mov    0x10(%eax),%eax
086880bb +0x0e3:  lea    0xecc(%eax),%ecx
086880c1 +0x0e9:  lea    -0x28(%ebp),%eax
086880c4 +0x0ec:  lea    -0x20(%ebp),%edx
086880c7 +0x0ef:  mov    %edx,0x8(%esp)
086880cb +0x0f3:  mov    %ecx,0x4(%esp)
086880cf +0x0f7:  mov    %eax,(%esp)
086880d2 +0x0fa:  call   0869c470 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8cc5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8cc5
086880d7 +0x0ff:  sub    $0x4,%esp
086880da +0x102:  mov    0x8(%ebp),%eax
086880dd +0x105:  mov    0x10(%eax),%eax
086880e0 +0x108:  mov    0x10(%ebp),%edx
086880e3 +0x10b:  mov    %edx,0xec4(%eax)
086880e9 +0x111:  mov    0x8(%ebp),%eax
086880ec +0x114:  mov    0x10(%eax),%eax
086880ef +0x117:  mov    0xc(%ebp),%edx
086880f2 +0x11a:  mov    %edx,0xec8(%eax)
086880f8 +0x120:  jmp    0868822b <+0x253>
086880fd +0x125:  mov    0x8(%ebp),%eax
08688100 +0x128:  mov    0x10(%eax),%ebx
08688103 +0x12b:  lea    -0x30(%ebp),%eax
08688106 +0x12e:  mov    %eax,(%esp)
08688109 +0x131:  call   0869aa3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7291>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7291
0868810e +0x136:  mov    0x4(%eax),%eax
08688111 +0x139:  mov    %eax,0xec4(%ebx)
08688117 +0x13f:  mov    0x8(%ebp),%eax
0868811a +0x142:  mov    0x10(%eax),%ebx
0868811d +0x145:  lea    -0x30(%ebp),%eax
08688120 +0x148:  mov    %eax,(%esp)
08688123 +0x14b:  call   0869aa3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7291>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7291
08688128 +0x150:  mov    0x8(%eax),%eax
0868812b +0x153:  mov    %eax,0xec8(%ebx)
08688131 +0x159:  mov    0x8(%ebp),%eax
08688134 +0x15c:  mov    0x10(%eax),%eax
08688137 +0x15f:  mov    0xec4(%eax),%eax
0868813d +0x165:  cmp    0x10(%ebp),%eax
08688140 +0x168:  jg     08688227 <+0x24f>
08688146 +0x16e:  mov    0x8(%ebp),%eax
08688149 +0x171:  mov    0x10(%eax),%eax
0868814c +0x174:  mov    0xec8(%eax),%edx
08688152 +0x17a:  mov    0xc(%ebp),%eax
08688155 +0x17d:  cmp    %eax,%edx
08688157 +0x17f:  jne    0868816e <+0x196>
08688159 +0x181:  mov    0x8(%ebp),%eax
0868815c +0x184:  mov    0x10(%eax),%eax
0868815f +0x187:  mov    0xec4(%eax),%eax
08688165 +0x18d:  cmp    0x10(%ebp),%eax
08688168 +0x190:  je     0868822a <+0x252>
0868816e +0x196:  mov    0x8(%ebp),%eax
08688171 +0x199:  mov    0x10(%eax),%eax
08688174 +0x19c:  mov    0xec4(%eax),%eax
0868817a +0x1a2:  cmp    0x10(%ebp),%eax
0868817d +0x1a5:  jne    086881bd <+0x1e5>
0868817f +0x1a7:  movl   $0x1,0x4(%esp)
08688187 +0x1af:  mov    0x8(%ebp),%eax
0868818a +0x1b2:  mov    %eax,(%esp)
0868818d +0x1b5:  call   086961a8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x29fd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x29fd
08688192 +0x1ba:  mov    0x8(%ebp),%eax
08688195 +0x1bd:  mov    0x10(%eax),%ebx
08688198 +0x1c0:  mov    0x8(%ebp),%eax
0868819b +0x1c3:  mov    0x10(%eax),%eax
0868819e +0x1c6:  lea    0xec8(%eax),%edx
086881a4 +0x1cc:  lea    0xc(%ebp),%eax
086881a7 +0x1cf:  mov    %eax,0x4(%esp)
086881ab +0x1d3:  mov    %edx,(%esp)
086881ae +0x1d6:  call   08236091 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb73b>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb73b
086881b3 +0x1db:  mov    (%eax),%eax
086881b5 +0x1dd:  mov    %eax,0xec8(%ebx)
086881bb +0x1e3:  jmp    086881ee <+0x216>
086881bd +0x1e5:  movl   $0x1,0x4(%esp)
086881c5 +0x1ed:  mov    0x8(%ebp),%eax
086881c8 +0x1f0:  mov    %eax,(%esp)
086881cb +0x1f3:  call   086961a8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x29fd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x29fd
086881d0 +0x1f8:  mov    0x8(%ebp),%eax
086881d3 +0x1fb:  mov    0x10(%eax),%eax
086881d6 +0x1fe:  mov    0xc(%ebp),%edx
086881d9 +0x201:  mov    %edx,0xec8(%eax)
086881df +0x207:  mov    0x8(%ebp),%eax
086881e2 +0x20a:  mov    0x10(%eax),%eax
086881e5 +0x20d:  mov    0x10(%ebp),%edx
086881e8 +0x210:  mov    %edx,0xec4(%eax)
086881ee +0x216:  lea    -0x30(%ebp),%eax
086881f1 +0x219:  mov    %eax,(%esp)
086881f4 +0x21c:  call   0869aa3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7291>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7291
086881f9 +0x221:  mov    0x8(%ebp),%edx
086881fc +0x224:  mov    0x10(%edx),%edx
086881ff +0x227:  mov    0xec4(%edx),%edx
08688205 +0x22d:  mov    %edx,0x4(%eax)
08688208 +0x230:  lea    -0x30(%ebp),%eax
0868820b +0x233:  mov    %eax,(%esp)
0868820e +0x236:  call   0869aa3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7291>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7291
08688213 +0x23b:  mov    0x8(%ebp),%edx
08688216 +0x23e:  mov    0x10(%edx),%edx
08688219 +0x241:  mov    0xec8(%edx),%edx
0868821f +0x247:  mov    %edx,0x8(%eax)
08688222 +0x24a:  jmp    0868822b <+0x253>
08688224 +0x24c:  nop
08688225 +0x24d:  jmp    0868822b <+0x253>
08688227 +0x24f:  nop
08688228 +0x250:  jmp    0868822b <+0x253>
0868822a +0x252:  nop
0868822b +0x253:  mov    -0x4(%ebp),%ebx
0868822e +0x256:  leave
0868822f +0x257:  ret
```

## 反编译 C

```c
// CUserCharacInfo::setBloodBestRecord @ 0x8687fd8

/* CUserCharacInfo::setBloodBestRecord(unsigned int, int, int, bool) */

void __thiscall
CUserCharacInfo::setBloodBestRecord
          (CUserCharacInfo *this,uint param_1,int param_2,int param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined3 in_stack_00000015;
  _Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>> local_34 [4];
  map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
  local_30 [4];
  pair local_2c [8];
  pair<int_const,stBloodBestRecord> local_24 [12];
  int local_18 [4];
  
  bVar1 = param_4;
  if (*(int *)(this + 0x10) != 0) {
    if (0xf < param_2) {
      param_2 = 0xf;
    }
    std::
    map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
    ::find((int *)local_34);
    std::
    map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
    ::end(local_30);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator==
                      (local_34,(_Rb_tree_iterator *)local_30);
    if (cVar2 == '\0') {
      iVar5 = *(int *)(this + 0x10);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->(local_34);
      *(undefined4 *)(iVar5 + 0xec4) = *(undefined4 *)(iVar3 + 4);
      iVar5 = *(int *)(this + 0x10);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->(local_34);
      *(undefined4 *)(iVar5 + 0xec8) = *(undefined4 *)(iVar3 + 8);
      if ((*(int *)(*(int *)(this + 0x10) + 0xec4) <= param_2) &&
         ((*(uint *)(*(int *)(this + 0x10) + 0xec8) != param_1 ||
          (*(int *)(*(int *)(this + 0x10) + 0xec4) != param_2)))) {
        if (*(int *)(*(int *)(this + 0x10) + 0xec4) == param_2) {
          setBloodBestRecordUpdate(this,true);
          iVar5 = *(int *)(this + 0x10);
          puVar4 = std::min<unsigned_int>((uint *)(*(int *)(this + 0x10) + 0xec8),&param_1);
          *(uint *)(iVar5 + 0xec8) = *puVar4;
        }
        else {
          setBloodBestRecordUpdate(this,true);
          *(uint *)(*(int *)(this + 0x10) + 0xec8) = param_1;
          *(int *)(*(int *)(this + 0x10) + 0xec4) = param_2;
        }
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->(local_34)
        ;
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(*(int *)(this + 0x10) + 0xec4);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->(local_34)
        ;
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(*(int *)(this + 0x10) + 0xec8);
      }
    }
    else {
      if (!bVar1) {
        setBloodBestRecordUpdate(this,true);
      }
      std::make_pair<int&,stBloodBestRecord&>(local_18,(stBloodBestRecord *)&param_3);
      std::pair<int_const,stBloodBestRecord>::pair<int,stBloodBestRecord>(local_24,(pair *)local_18)
      ;
      std::
      map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
      ::insert(local_2c);
      *(int *)(*(int *)(this + 0x10) + 0xec4) = param_2;
      *(uint *)(*(int *)(this + 0x10) + 0xec8) = param_1;
    }
  }
  return;
}
```
