//
// This file is automatically generated by generate_auto_job.
// Edits will be automatically overwritten if the build is
// run in maintainer mode.
//
// clang-format off
//
static char const* yn_choices[] = {"y", "n", 0};
static char const* password_mode_choices[] = {"bytes", "hex-bytes", "unicode", "auto", 0};
static char const* stream_data_choices[] = {"compress", "preserve", "uncompress", 0};
static char const* decode_level_choices[] = {"none", "generalized", "specialized", "all", 0};
static char const* object_streams_choices[] = {"disable", "preserve", "generate", 0};
static char const* remove_unref_choices[] = {"auto", "yes", "no", 0};
static char const* flatten_choices[] = {"all", "print", "screen", 0};
static char const* json_key_choices[] = {"acroform", "attachments", "encrypt", "objectinfo", "objects", "outlines", "pagelabels", "pages", "qpdf", 0};
static char const* json_output_choices[] = {"2", "latest", 0};
static char const* json_stream_data_choices[] = {"none", "inline", "file", 0};
static char const* json_version_choices[] = {"1", "2", "latest", 0};
static char const* enc_bits_choices[] = {"40", "128", "256", 0};
static char const* print128_choices[] = {"full", "low", "none", 0};
static char const* modify128_choices[] = {"all", "annotate", "form", "assembly", "none", 0};

pushKey("inputFile");
setupInputFile();
popHandler(); // key: inputFile
pushKey("password");
setupPassword();
popHandler(); // key: password
pushKey("passwordFile");
addParameter([this](std::string const& p) { c_main->passwordFile(p); });
popHandler(); // key: passwordFile
pushKey("empty");
setupEmpty();
popHandler(); // key: empty
pushKey("jsonInput");
addBare([this]() { c_main->jsonInput(); });
popHandler(); // key: jsonInput
pushKey("outputFile");
setupOutputFile();
popHandler(); // key: outputFile
pushKey("replaceInput");
setupReplaceInput();
popHandler(); // key: replaceInput
pushKey("qdf");
addBare([this]() { c_main->qdf(); });
popHandler(); // key: qdf
pushKey("preserveUnreferenced");
addBare([this]() { c_main->preserveUnreferenced(); });
popHandler(); // key: preserveUnreferenced
pushKey("newlineBeforeEndstream");
addBare([this]() { c_main->newlineBeforeEndstream(); });
popHandler(); // key: newlineBeforeEndstream
pushKey("normalizeContent");
addChoices(yn_choices, true, [this](std::string const& p) { c_main->normalizeContent(p); });
popHandler(); // key: normalizeContent
pushKey("streamData");
addChoices(stream_data_choices, true, [this](std::string const& p) { c_main->streamData(p); });
popHandler(); // key: streamData
pushKey("compressStreams");
addChoices(yn_choices, true, [this](std::string const& p) { c_main->compressStreams(p); });
popHandler(); // key: compressStreams
pushKey("recompressFlate");
addBare([this]() { c_main->recompressFlate(); });
popHandler(); // key: recompressFlate
pushKey("decodeLevel");
addChoices(decode_level_choices, true, [this](std::string const& p) { c_main->decodeLevel(p); });
popHandler(); // key: decodeLevel
pushKey("decrypt");
addBare([this]() { c_main->decrypt(); });
popHandler(); // key: decrypt
pushKey("deterministicId");
addBare([this]() { c_main->deterministicId(); });
popHandler(); // key: deterministicId
pushKey("staticAesIv");
addBare([this]() { c_main->staticAesIv(); });
popHandler(); // key: staticAesIv
pushKey("staticId");
addBare([this]() { c_main->staticId(); });
popHandler(); // key: staticId
pushKey("noOriginalObjectIds");
addBare([this]() { c_main->noOriginalObjectIds(); });
popHandler(); // key: noOriginalObjectIds
pushKey("copyEncryption");
addParameter([this](std::string const& p) { c_main->copyEncryption(p); });
popHandler(); // key: copyEncryption
pushKey("encryptionFilePassword");
addParameter([this](std::string const& p) { c_main->encryptionFilePassword(p); });
popHandler(); // key: encryptionFilePassword
pushKey("linearize");
addBare([this]() { c_main->linearize(); });
popHandler(); // key: linearize
pushKey("linearizePass1");
addParameter([this](std::string const& p) { c_main->linearizePass1(p); });
popHandler(); // key: linearizePass1
pushKey("objectStreams");
addChoices(object_streams_choices, true, [this](std::string const& p) { c_main->objectStreams(p); });
popHandler(); // key: objectStreams
pushKey("minVersion");
addParameter([this](std::string const& p) { c_main->minVersion(p); });
popHandler(); // key: minVersion
pushKey("forceVersion");
addParameter([this](std::string const& p) { c_main->forceVersion(p); });
popHandler(); // key: forceVersion
pushKey("progress");
addBare([this]() { c_main->progress(); });
popHandler(); // key: progress
pushKey("splitPages");
addParameter([this](std::string const& p) { c_main->splitPages(p); });
popHandler(); // key: splitPages
pushKey("jsonOutput");
addChoices(json_output_choices, false, [this](std::string const& p) { c_main->jsonOutput(p); });
popHandler(); // key: jsonOutput
pushKey("removeRestrictions");
addBare([this]() { c_main->removeRestrictions(); });
popHandler(); // key: removeRestrictions
pushKey("encrypt");
beginDict(bindJSON(&Handlers::beginEncrypt), bindBare(&Handlers::endEncrypt)); // .encrypt
pushKey("userPassword");
setupEncryptUserPassword();
popHandler(); // key: userPassword
pushKey("ownerPassword");
setupEncryptOwnerPassword();
popHandler(); // key: ownerPassword
pushKey("Bits");
popHandler(); // key: Bits
pushKey("40bit");
beginDict(bindJSON(&Handlers::beginEncrypt40bit), bindBare(&Handlers::endEncrypt40bit)); // .encrypt.40bit
pushKey("annotate");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->annotate(p); });
popHandler(); // key: annotate
pushKey("extract");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->extract(p); });
popHandler(); // key: extract
pushKey("modify");
addChoices(modify128_choices, true, [this](std::string const& p) { c_enc->modify(p); });
popHandler(); // key: modify
pushKey("print");
addChoices(print128_choices, true, [this](std::string const& p) { c_enc->print(p); });
popHandler(); // key: print
popHandler(); // key: 40bit
pushKey("128bit");
beginDict(bindJSON(&Handlers::beginEncrypt128bit), bindBare(&Handlers::endEncrypt128bit)); // .encrypt.128bit
pushKey("accessibility");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->accessibility(p); });
popHandler(); // key: accessibility
pushKey("annotate");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->annotate(p); });
popHandler(); // key: annotate
pushKey("assemble");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->assemble(p); });
popHandler(); // key: assemble
pushKey("cleartextMetadata");
addBare([this]() { c_enc->cleartextMetadata(); });
popHandler(); // key: cleartextMetadata
pushKey("extract");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->extract(p); });
popHandler(); // key: extract
pushKey("form");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->form(p); });
popHandler(); // key: form
pushKey("modifyOther");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->modifyOther(p); });
popHandler(); // key: modifyOther
pushKey("modify");
addChoices(modify128_choices, true, [this](std::string const& p) { c_enc->modify(p); });
popHandler(); // key: modify
pushKey("print");
addChoices(print128_choices, true, [this](std::string const& p) { c_enc->print(p); });
popHandler(); // key: print
pushKey("forceV4");
addBare([this]() { c_enc->forceV4(); });
popHandler(); // key: forceV4
pushKey("useAes");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->useAes(p); });
popHandler(); // key: useAes
popHandler(); // key: 128bit
pushKey("256bit");
beginDict(bindJSON(&Handlers::beginEncrypt256bit), bindBare(&Handlers::endEncrypt256bit)); // .encrypt.256bit
pushKey("accessibility");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->accessibility(p); });
popHandler(); // key: accessibility
pushKey("annotate");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->annotate(p); });
popHandler(); // key: annotate
pushKey("assemble");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->assemble(p); });
popHandler(); // key: assemble
pushKey("cleartextMetadata");
addBare([this]() { c_enc->cleartextMetadata(); });
popHandler(); // key: cleartextMetadata
pushKey("extract");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->extract(p); });
popHandler(); // key: extract
pushKey("form");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->form(p); });
popHandler(); // key: form
pushKey("modifyOther");
addChoices(yn_choices, true, [this](std::string const& p) { c_enc->modifyOther(p); });
popHandler(); // key: modifyOther
pushKey("modify");
addChoices(modify128_choices, true, [this](std::string const& p) { c_enc->modify(p); });
popHandler(); // key: modify
pushKey("print");
addChoices(print128_choices, true, [this](std::string const& p) { c_enc->print(p); });
popHandler(); // key: print
pushKey("allowInsecure");
addBare([this]() { c_enc->allowInsecure(); });
popHandler(); // key: allowInsecure
pushKey("forceR5");
addBare([this]() { c_enc->forceR5(); });
popHandler(); // key: forceR5
popHandler(); // key: 256bit
popHandler(); // key: encrypt
pushKey("check");
addBare([this]() { c_main->check(); });
popHandler(); // key: check
pushKey("checkLinearization");
addBare([this]() { c_main->checkLinearization(); });
popHandler(); // key: checkLinearization
pushKey("filteredStreamData");
addBare([this]() { c_main->filteredStreamData(); });
popHandler(); // key: filteredStreamData
pushKey("rawStreamData");
addBare([this]() { c_main->rawStreamData(); });
popHandler(); // key: rawStreamData
pushKey("showEncryption");
addBare([this]() { c_main->showEncryption(); });
popHandler(); // key: showEncryption
pushKey("showEncryptionKey");
addBare([this]() { c_main->showEncryptionKey(); });
popHandler(); // key: showEncryptionKey
pushKey("showLinearization");
addBare([this]() { c_main->showLinearization(); });
popHandler(); // key: showLinearization
pushKey("showNpages");
addBare([this]() { c_main->showNpages(); });
popHandler(); // key: showNpages
pushKey("showObject");
addParameter([this](std::string const& p) { c_main->showObject(p); });
popHandler(); // key: showObject
pushKey("showPages");
addBare([this]() { c_main->showPages(); });
popHandler(); // key: showPages
pushKey("showXref");
addBare([this]() { c_main->showXref(); });
popHandler(); // key: showXref
pushKey("withImages");
addBare([this]() { c_main->withImages(); });
popHandler(); // key: withImages
pushKey("listAttachments");
addBare([this]() { c_main->listAttachments(); });
popHandler(); // key: listAttachments
pushKey("showAttachment");
addParameter([this](std::string const& p) { c_main->showAttachment(p); });
popHandler(); // key: showAttachment
pushKey("json");
addChoices(json_version_choices, false, [this](std::string const& p) { c_main->json(p); });
popHandler(); // key: json
pushKey("jsonKey");
beginArray(bindJSON(&Handlers::beginJsonKeyArray), bindBare(&Handlers::endJsonKeyArray)); // .jsonKey[]
addChoices(json_key_choices, true, [this](std::string const& p) { c_main->jsonKey(p); });
popHandler(); // array: .jsonKey[]
popHandler(); // key: jsonKey
pushKey("jsonObject");
beginArray(bindJSON(&Handlers::beginJsonObjectArray), bindBare(&Handlers::endJsonObjectArray)); // .jsonObject[]
addParameter([this](std::string const& p) { c_main->jsonObject(p); });
popHandler(); // array: .jsonObject[]
popHandler(); // key: jsonObject
pushKey("jsonStreamData");
addChoices(json_stream_data_choices, true, [this](std::string const& p) { c_main->jsonStreamData(p); });
popHandler(); // key: jsonStreamData
pushKey("jsonStreamPrefix");
addParameter([this](std::string const& p) { c_main->jsonStreamPrefix(p); });
popHandler(); // key: jsonStreamPrefix
pushKey("updateFromJson");
addParameter([this](std::string const& p) { c_main->updateFromJson(p); });
popHandler(); // key: updateFromJson
pushKey("allowWeakCrypto");
addBare([this]() { c_main->allowWeakCrypto(); });
popHandler(); // key: allowWeakCrypto
pushKey("keepFilesOpen");
addChoices(yn_choices, true, [this](std::string const& p) { c_main->keepFilesOpen(p); });
popHandler(); // key: keepFilesOpen
pushKey("keepFilesOpenThreshold");
addParameter([this](std::string const& p) { c_main->keepFilesOpenThreshold(p); });
popHandler(); // key: keepFilesOpenThreshold
pushKey("noWarn");
addBare([this]() { c_main->noWarn(); });
popHandler(); // key: noWarn
pushKey("verbose");
addBare([this]() { c_main->verbose(); });
popHandler(); // key: verbose
pushKey("testJsonSchema");
addBare([this]() { c_main->testJsonSchema(); });
popHandler(); // key: testJsonSchema
pushKey("ignoreXrefStreams");
addBare([this]() { c_main->ignoreXrefStreams(); });
popHandler(); // key: ignoreXrefStreams
pushKey("passwordIsHexKey");
addBare([this]() { c_main->passwordIsHexKey(); });
popHandler(); // key: passwordIsHexKey
pushKey("passwordMode");
addChoices(password_mode_choices, true, [this](std::string const& p) { c_main->passwordMode(p); });
popHandler(); // key: passwordMode
pushKey("suppressPasswordRecovery");
addBare([this]() { c_main->suppressPasswordRecovery(); });
popHandler(); // key: suppressPasswordRecovery
pushKey("suppressRecovery");
addBare([this]() { c_main->suppressRecovery(); });
popHandler(); // key: suppressRecovery
pushKey("coalesceContents");
addBare([this]() { c_main->coalesceContents(); });
popHandler(); // key: coalesceContents
pushKey("compressionLevel");
addParameter([this](std::string const& p) { c_main->compressionLevel(p); });
popHandler(); // key: compressionLevel
pushKey("externalizeInlineImages");
addBare([this]() { c_main->externalizeInlineImages(); });
popHandler(); // key: externalizeInlineImages
pushKey("iiMinBytes");
addParameter([this](std::string const& p) { c_main->iiMinBytes(p); });
popHandler(); // key: iiMinBytes
pushKey("removeUnreferencedResources");
addChoices(remove_unref_choices, true, [this](std::string const& p) { c_main->removeUnreferencedResources(p); });
popHandler(); // key: removeUnreferencedResources
pushKey("addAttachment");
beginArray(bindJSON(&Handlers::beginAddAttachmentArray), bindBare(&Handlers::endAddAttachmentArray)); // .addAttachment[]
beginDict(bindJSON(&Handlers::beginAddAttachment), bindBare(&Handlers::endAddAttachment)); // .addAttachment
pushKey("file");
setupAddAttachmentFile();
popHandler(); // key: file
pushKey("creationdate");
addParameter([this](std::string const& p) { c_att->creationdate(p); });
popHandler(); // key: creationdate
pushKey("description");
addParameter([this](std::string const& p) { c_att->description(p); });
popHandler(); // key: description
pushKey("filename");
addParameter([this](std::string const& p) { c_att->filename(p); });
popHandler(); // key: filename
pushKey("key");
addParameter([this](std::string const& p) { c_att->key(p); });
popHandler(); // key: key
pushKey("mimetype");
addParameter([this](std::string const& p) { c_att->mimetype(p); });
popHandler(); // key: mimetype
pushKey("moddate");
addParameter([this](std::string const& p) { c_att->moddate(p); });
popHandler(); // key: moddate
pushKey("replace");
addBare([this]() { c_att->replace(); });
popHandler(); // key: replace
popHandler(); // array: .addAttachment[]
popHandler(); // key: addAttachment
pushKey("removeAttachment");
beginArray(bindJSON(&Handlers::beginRemoveAttachmentArray), bindBare(&Handlers::endRemoveAttachmentArray)); // .removeAttachment[]
addParameter([this](std::string const& p) { c_main->removeAttachment(p); });
popHandler(); // array: .removeAttachment[]
popHandler(); // key: removeAttachment
pushKey("copyAttachmentsFrom");
beginArray(bindJSON(&Handlers::beginCopyAttachmentsFromArray), bindBare(&Handlers::endCopyAttachmentsFromArray)); // .copyAttachmentsFrom[]
beginDict(bindJSON(&Handlers::beginCopyAttachmentsFrom), bindBare(&Handlers::endCopyAttachmentsFrom)); // .copyAttachmentsFrom
pushKey("file");
setupCopyAttachmentsFromFile();
popHandler(); // key: file
pushKey("password");
setupCopyAttachmentsFromPassword();
popHandler(); // key: password
pushKey("prefix");
addParameter([this](std::string const& p) { c_copy_att->prefix(p); });
popHandler(); // key: prefix
popHandler(); // array: .copyAttachmentsFrom[]
popHandler(); // key: copyAttachmentsFrom
pushKey("collate");
addParameter([this](std::string const& p) { c_main->collate(p); });
popHandler(); // key: collate
pushKey("flattenAnnotations");
addChoices(flatten_choices, true, [this](std::string const& p) { c_main->flattenAnnotations(p); });
popHandler(); // key: flattenAnnotations
pushKey("flattenRotation");
addBare([this]() { c_main->flattenRotation(); });
popHandler(); // key: flattenRotation
pushKey("generateAppearances");
addBare([this]() { c_main->generateAppearances(); });
popHandler(); // key: generateAppearances
pushKey("keepInlineImages");
addBare([this]() { c_main->keepInlineImages(); });
popHandler(); // key: keepInlineImages
pushKey("oiMinArea");
addParameter([this](std::string const& p) { c_main->oiMinArea(p); });
popHandler(); // key: oiMinArea
pushKey("oiMinHeight");
addParameter([this](std::string const& p) { c_main->oiMinHeight(p); });
popHandler(); // key: oiMinHeight
pushKey("oiMinWidth");
addParameter([this](std::string const& p) { c_main->oiMinWidth(p); });
popHandler(); // key: oiMinWidth
pushKey("optimizeImages");
addBare([this]() { c_main->optimizeImages(); });
popHandler(); // key: optimizeImages
pushKey("pages");
beginArray(bindJSON(&Handlers::beginPagesArray), bindBare(&Handlers::endPagesArray)); // .pages[]
beginDict(bindJSON(&Handlers::beginPages), bindBare(&Handlers::endPages)); // .pages
pushKey("file");
setupPagesFile();
popHandler(); // key: file
pushKey("password");
setupPagesPassword();
popHandler(); // key: password
pushKey("range");
addParameter([this](std::string const& p) { c_pages->range(p); });
popHandler(); // key: range
popHandler(); // array: .pages[]
popHandler(); // key: pages
pushKey("removePageLabels");
addBare([this]() { c_main->removePageLabels(); });
popHandler(); // key: removePageLabels
pushKey("reportMemoryUsage");
addBare([this]() { c_main->reportMemoryUsage(); });
popHandler(); // key: reportMemoryUsage
pushKey("rotate");
addParameter([this](std::string const& p) { c_main->rotate(p); });
popHandler(); // key: rotate
pushKey("setPageLabels");
beginArray(bindJSON(&Handlers::beginSetPageLabelsArray), bindBare(&Handlers::endSetPageLabelsArray)); // .setPageLabels[]
setupSetPageLabels();
popHandler(); // array: .setPageLabels[]
popHandler(); // key: setPageLabels
pushKey("overlay");
beginArray(bindJSON(&Handlers::beginOverlayArray), bindBare(&Handlers::endOverlayArray)); // .overlay[]
beginDict(bindJSON(&Handlers::beginOverlay), bindBare(&Handlers::endOverlay)); // .overlay
pushKey("file");
setupOverlayFile();
popHandler(); // key: file
pushKey("password");
setupOverlayPassword();
popHandler(); // key: password
pushKey("from");
addParameter([this](std::string const& p) { c_uo->from(p); });
popHandler(); // key: from
pushKey("repeat");
addParameter([this](std::string const& p) { c_uo->repeat(p); });
popHandler(); // key: repeat
pushKey("to");
addParameter([this](std::string const& p) { c_uo->to(p); });
popHandler(); // key: to
popHandler(); // array: .overlay[]
popHandler(); // key: overlay
pushKey("underlay");
beginArray(bindJSON(&Handlers::beginUnderlayArray), bindBare(&Handlers::endUnderlayArray)); // .underlay[]
beginDict(bindJSON(&Handlers::beginUnderlay), bindBare(&Handlers::endUnderlay)); // .underlay
pushKey("file");
setupUnderlayFile();
popHandler(); // key: file
pushKey("password");
setupUnderlayPassword();
popHandler(); // key: password
pushKey("from");
addParameter([this](std::string const& p) { c_uo->from(p); });
popHandler(); // key: from
pushKey("repeat");
addParameter([this](std::string const& p) { c_uo->repeat(p); });
popHandler(); // key: repeat
pushKey("to");
addParameter([this](std::string const& p) { c_uo->to(p); });
popHandler(); // key: to
popHandler(); // array: .underlay[]
popHandler(); // key: underlay
pushKey("warningExit0");
addBare([this]() { c_main->warningExit0(); });
popHandler(); // key: warningExit0
pushKey("jobJsonFile");
addParameter([this](std::string const& p) { c_main->jobJsonFile(p); });
popHandler(); // key: jobJsonFile
pushKey("preserveUnreferencedResources");
addBare([this]() { c_main->preserveUnreferencedResources(); });
popHandler(); // key: preserveUnreferencedResources
pushKey("requiresPassword");
addBare([this]() { c_main->requiresPassword(); });
popHandler(); // key: requiresPassword
pushKey("isEncrypted");
addBare([this]() { c_main->isEncrypted(); });
popHandler(); // key: isEncrypted
