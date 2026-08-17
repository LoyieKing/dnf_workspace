# ARAD__SCRIPT__AradJumping_Script

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getCurRewardItem

```asm
// === 088b424a ARAD::SCRIPT::AradJumping_Script::getCurRewardItem  [0x088b424a-0x88b430a] ===
 88b424a:	55                   	push   %ebp
 88b424b:	89 e5                	mov    %esp,%ebp
 88b424d:	83 ec 28             	sub    $0x28,%esp
 88b4250:	8b 55 08             	mov    0x8(%ebp),%edx
 88b4253:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b4256:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b425a:	89 04 24             	mov    %eax,(%esp)
 88b425d:	e8 b4 03 00 00       	call   88b4616 <_ZNSt6vectorIN4ARAD6SCRIPT22_AradJumpingRewardItemESaIS2_EE5beginEv>
 88b4262:	83 ec 04             	sub    $0x4,%esp
 88b4265:	8b 55 08             	mov    0x8(%ebp),%edx
 88b4268:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b426b:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b426f:	89 04 24             	mov    %eax,(%esp)
 88b4272:	e8 c3 03 00 00       	call   88b463a <_ZNSt6vectorIN4ARAD6SCRIPT22_AradJumpingRewardItemESaIS2_EE3endEv>
 88b4277:	83 ec 04             	sub    $0x4,%esp
 88b427a:	eb 55                	jmp    88b42d1 <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0x87>
 88b427c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b427f:	89 04 24             	mov    %eax,(%esp)
 88b4282:	e8 1b 04 00 00       	call   88b46a2 <_ZNK9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT22_AradJumpingRewardItemESt6vectorIS3_SaIS3_EEEptEv>
 88b4287:	8b 00                	mov    (%eax),%eax
 88b4289:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88b428c:	75 1a                	jne    88b42a8 <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0x5e>
 88b428e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b4291:	89 04 24             	mov    %eax,(%esp)
 88b4294:	e8 09 04 00 00       	call   88b46a2 <_ZNK9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT22_AradJumpingRewardItemESt6vectorIS3_SaIS3_EEEptEv>
 88b4299:	8b 40 04             	mov    0x4(%eax),%eax
 88b429c:	3b 45 10             	cmp    0x10(%ebp),%eax
 88b429f:	75 07                	jne    88b42a8 <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0x5e>
 88b42a1:	b8 01 00 00 00       	mov    $0x1,%eax
 88b42a6:	eb 05                	jmp    88b42ad <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0x63>
 88b42a8:	b8 00 00 00 00       	mov    $0x0,%eax
 88b42ad:	84 c0                	test   %al,%al
 88b42af:	74 15                	je     88b42c6 <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0x7c>
 88b42b1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b42b4:	89 04 24             	mov    %eax,(%esp)
 88b42b7:	e8 e6 03 00 00       	call   88b46a2 <_ZNK9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT22_AradJumpingRewardItemESt6vectorIS3_SaIS3_EEEptEv>
 88b42bc:	8b 50 08             	mov    0x8(%eax),%edx
 88b42bf:	8b 45 14             	mov    0x14(%ebp),%eax
 88b42c2:	89 10                	mov    %edx,(%eax)
 88b42c4:	eb 21                	jmp    88b42e7 <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0x9d>
 88b42c6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b42c9:	89 04 24             	mov    %eax,(%esp)
 88b42cc:	e8 bb 03 00 00       	call   88b468c <_ZN9__gnu_cxx17__normal_iteratorIPN4ARAD6SCRIPT22_AradJumpingRewardItemESt6vectorIS3_SaIS3_EEEppEv>
 88b42d1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b42d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b42d8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b42db:	89 04 24             	mov    %eax,(%esp)
 88b42de:	e8 7d 03 00 00       	call   88b4660 <_ZN9__gnu_cxxneIPN4ARAD6SCRIPT22_AradJumpingRewardItemESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 88b42e3:	84 c0                	test   %al,%al
 88b42e5:	75 95                	jne    88b427c <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0x32>
 88b42e7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b42ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b42ee:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b42f1:	89 04 24             	mov    %eax,(%esp)
 88b42f4:	e8 67 03 00 00       	call   88b4660 <_ZN9__gnu_cxxneIPN4ARAD6SCRIPT22_AradJumpingRewardItemESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 88b42f9:	84 c0                	test   %al,%al
 88b42fb:	74 07                	je     88b4304 <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0xba>
 88b42fd:	b8 01 00 00 00       	mov    $0x1,%eax
 88b4302:	eb 05                	jmp    88b4309 <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm+0xbf>
 88b4304:	b8 00 00 00 00       	mov    $0x0,%eax
 88b4309:	c9                   	leave
 88b430a:	c3                   	ret

```

```c
// ARAD::SCRIPT::AradJumping_Script::getCurRewardItem @ 0x88b424a

/* ARAD::SCRIPT::AradJumping_Script::getCurRewardItem(int, int, unsigned long&) */

bool __thiscall
ARAD::SCRIPT::AradJumping_Script::getCurRewardItem
          (AradJumping_Script *this,int param_1,int param_2,ulong *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
  local_10 [12];
  
  std::
  vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
  ::begin();
  std::
  vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
  ::end();
  do {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
LAB_088b42e7:
      bVar1 = __gnu_cxx::operator!=(local_10,local_14);
      return bVar1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
                    ::operator->(local_10);
    if ((*piVar2 == param_1) &&
       (iVar3 = __gnu_cxx::
                __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
                ::operator->(local_10), *(int *)(iVar3 + 4) == param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = __gnu_cxx::
              __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
              ::operator->(local_10);
      *param_3 = *(ulong *)(iVar3 + 8);
      goto LAB_088b42e7;
    }
    __gnu_cxx::
    __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
    ::operator++(local_10);
  } while( true );
}

```

---

## importScript

```asm
// === 088b4128 ARAD::SCRIPT::AradJumping_Script::importScript  [0x088b4128-0x88b4249] ===
 88b4128:	55                   	push   %ebp
 88b4129:	89 e5                	mov    %esp,%ebp
 88b412b:	56                   	push   %esi
 88b412c:	53                   	push   %ebx
 88b412d:	83 ec 30             	sub    $0x30,%esp
 88b4130:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b4133:	89 04 24             	mov    %eax,(%esp)
 88b4136:	e8 95 24 e5 ff       	call   87065d0 <_ZNSsC1Ev>
 88b413b:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 88b413f:	8b 45 08             	mov    0x8(%ebp),%eax
 88b4142:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b4146:	c7 04 24 02 76 e0 08 	movl   $0x8e07602,(%esp)
 88b414d:	e8 d7 7b 00 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88b4152:	83 f0 01             	xor    $0x1,%eax
 88b4155:	84 c0                	test   %al,%al
 88b4157:	74 0a                	je     88b4163 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0x3b>
 88b4159:	bb 01 00 00 00       	mov    $0x1,%ebx
 88b415e:	e9 d3 00 00 00       	jmp    88b4236 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0x10e>
 88b4163:	8b 45 0c             	mov    0xc(%ebp),%eax
 88b4166:	89 04 24             	mov    %eax,(%esp)
 88b4169:	e8 80 02 00 00       	call   88b43ee <_ZN4ARAD6SCRIPT18AradJumping_Script17getRDARScriptDataEv>
 88b416e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88b4171:	eb 01                	jmp    88b4174 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0x4c>
 88b4173:	90                   	nop
 88b4174:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88b417b:	00 
 88b417c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b417f:	89 04 24             	mov    %eax,(%esp)
 88b4182:	e8 d8 86 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88b4187:	83 f0 01             	xor    $0x1,%eax
 88b418a:	84 c0                	test   %al,%al
 88b418c:	0f 85 81 00 00 00    	jne    88b4213 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0xeb>
 88b4192:	c7 44 24 04 4f 76 e0 	movl   $0x8e0764f,0x4(%esp)
 88b4199:	08 
 88b419a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b419d:	89 04 24             	mov    %eax,(%esp)
 88b41a0:	e8 fc c7 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b41a5:	84 c0                	test   %al,%al
 88b41a7:	74 ca                	je     88b4173 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0x4b>
 88b41a9:	8d 45 ef             	lea    -0x11(%ebp),%eax
 88b41ac:	89 04 24             	mov    %eax,(%esp)
 88b41af:	e8 c7 81 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b41b4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 88b41b7:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 88b41bb:	83 f0 01             	xor    $0x1,%eax
 88b41be:	84 c0                	test   %al,%al
 88b41c0:	74 02                	je     88b41c4 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0x9c>
 88b41c2:	eb 4a                	jmp    88b420e <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0xe6>
 88b41c4:	8d 45 ef             	lea    -0x11(%ebp),%eax
 88b41c7:	89 04 24             	mov    %eax,(%esp)
 88b41ca:	e8 ac 81 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b41cf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88b41d2:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 88b41d6:	83 f0 01             	xor    $0x1,%eax
 88b41d9:	84 c0                	test   %al,%al
 88b41db:	74 02                	je     88b41df <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0xb7>
 88b41dd:	eb 2f                	jmp    88b420e <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0xe6>
 88b41df:	8d 45 ef             	lea    -0x11(%ebp),%eax
 88b41e2:	89 04 24             	mov    %eax,(%esp)
 88b41e5:	e8 91 81 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b41ea:	89 45 e8             	mov    %eax,-0x18(%ebp)
 88b41ed:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 88b41f1:	83 f0 01             	xor    $0x1,%eax
 88b41f4:	84 c0                	test   %al,%al
 88b41f6:	74 02                	je     88b41fa <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0xd2>
 88b41f8:	eb 14                	jmp    88b420e <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0xe6>
 88b41fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b41fd:	8d 55 e0             	lea    -0x20(%ebp),%edx
 88b4200:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b4204:	89 04 24             	mov    %eax,(%esp)
 88b4207:	e8 96 03 00 00       	call   88b45a2 <_ZNSt6vectorIN4ARAD6SCRIPT22_AradJumpingRewardItemESaIS2_EE9push_backERKS2_>
 88b420c:	eb 9b                	jmp    88b41a9 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0x81>
 88b420e:	e9 61 ff ff ff       	jmp    88b4174 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0x4c>
 88b4213:	90                   	nop
 88b4214:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b4219:	eb 1b                	jmp    88b4236 <_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_+0x10e>
 88b421b:	89 d3                	mov    %edx,%ebx
 88b421d:	89 c6                	mov    %eax,%esi
 88b421f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b4222:	89 04 24             	mov    %eax,(%esp)
 88b4225:	e8 b6 39 e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b422a:	89 f0                	mov    %esi,%eax
 88b422c:	89 da                	mov    %ebx,%edx
 88b422e:	89 04 24             	mov    %eax,(%esp)
 88b4231:	e8 1a f5 22 00       	call   8ae3750 <_Unwind_Resume>
 88b4236:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b4239:	89 04 24             	mov    %eax,(%esp)
 88b423c:	e8 9f 39 e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b4241:	89 d8                	mov    %ebx,%eax
 88b4243:	83 c4 30             	add    $0x30,%esp
 88b4246:	5b                   	pop    %ebx
 88b4247:	5e                   	pop    %esi
 88b4248:	5d                   	pop    %ebp
 88b4249:	c3                   	ret

```

```c
// ARAD::SCRIPT::AradJumping_Script::importScript @ 0x88b4128

/* ARAD::SCRIPT::AradJumping_Script::importScript(char*, ARAD::SCRIPT::AradJumping_Script&) */

undefined4 ARAD::SCRIPT::AradJumping_Script::importScript(char *param_1,AradJumping_Script *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  bool local_15;
  string local_14;
  vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
  *local_10;
  
  std::string::string((string *)&local_14);
  local_15 = false;
                    /* try { // try from 088b414d to 088b420b has its CatchHandler @ 088b421b */
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    local_10 = (vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
                *)getRDARScriptData(param_2);
    while (cVar1 = ScanType((string *)&local_14,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[Jumping Gift]");
      if (bVar2) {
        while (((local_24 = ScanInt(&local_15), local_15 == true &&
                (local_20 = ScanInt(&local_15), local_15 == true)) &&
               (local_1c = ScanInt(&local_15), local_15 == true))) {
          std::
          vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
          ::push_back(local_10,(_AradJumpingRewardItem *)&local_24);
        }
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  std::string::~string((string *)&local_14);
  return uVar3;
}

```

