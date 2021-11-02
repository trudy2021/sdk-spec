<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: messaging_model.proto

namespace Com\Elarian\Hera\Proto;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>com.elarian.hera.proto.GetRecordingCallAction</code>
 */
class GetRecordingCallAction extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>.google.protobuf.Duration timeout = 3;</code>
     */
    protected $timeout = null;
    /**
     * Generated from protobuf field <code>.google.protobuf.Duration max_length = 4;</code>
     */
    protected $max_length = null;
    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue finish_on_key = 5;</code>
     */
    protected $finish_on_key = null;
    /**
     * Generated from protobuf field <code>bool play_beep = 6;</code>
     */
    protected $play_beep = false;
    /**
     * Generated from protobuf field <code>bool trim_silence = 7;</code>
     */
    protected $trim_silence = false;
    protected $prompt;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type \Com\Elarian\Hera\Proto\SayCallAction $say
     *     @type \Com\Elarian\Hera\Proto\PlayCallAction $play
     *     @type \Google\Protobuf\Duration $timeout
     *     @type \Google\Protobuf\Duration $max_length
     *     @type \Google\Protobuf\StringValue $finish_on_key
     *     @type bool $play_beep
     *     @type bool $trim_silence
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\MessagingModel::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.SayCallAction say = 1;</code>
     * @return \Com\Elarian\Hera\Proto\SayCallAction
     */
    public function getSay()
    {
        return $this->readOneof(1);
    }

    public function hasSay()
    {
        return $this->hasOneof(1);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.SayCallAction say = 1;</code>
     * @param \Com\Elarian\Hera\Proto\SayCallAction $var
     * @return $this
     */
    public function setSay($var)
    {
        GPBUtil::checkMessage($var, \Com\Elarian\Hera\Proto\SayCallAction::class);
        $this->writeOneof(1, $var);

        return $this;
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.PlayCallAction play = 2;</code>
     * @return \Com\Elarian\Hera\Proto\PlayCallAction
     */
    public function getPlay()
    {
        return $this->readOneof(2);
    }

    public function hasPlay()
    {
        return $this->hasOneof(2);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.PlayCallAction play = 2;</code>
     * @param \Com\Elarian\Hera\Proto\PlayCallAction $var
     * @return $this
     */
    public function setPlay($var)
    {
        GPBUtil::checkMessage($var, \Com\Elarian\Hera\Proto\PlayCallAction::class);
        $this->writeOneof(2, $var);

        return $this;
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.Duration timeout = 3;</code>
     * @return \Google\Protobuf\Duration
     */
    public function getTimeout()
    {
        return isset($this->timeout) ? $this->timeout : null;
    }

    public function hasTimeout()
    {
        return isset($this->timeout);
    }

    public function clearTimeout()
    {
        unset($this->timeout);
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.Duration timeout = 3;</code>
     * @param \Google\Protobuf\Duration $var
     * @return $this
     */
    public function setTimeout($var)
    {
        GPBUtil::checkMessage($var, \Google\Protobuf\Duration::class);
        $this->timeout = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.Duration max_length = 4;</code>
     * @return \Google\Protobuf\Duration
     */
    public function getMaxLength()
    {
        return isset($this->max_length) ? $this->max_length : null;
    }

    public function hasMaxLength()
    {
        return isset($this->max_length);
    }

    public function clearMaxLength()
    {
        unset($this->max_length);
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.Duration max_length = 4;</code>
     * @param \Google\Protobuf\Duration $var
     * @return $this
     */
    public function setMaxLength($var)
    {
        GPBUtil::checkMessage($var, \Google\Protobuf\Duration::class);
        $this->max_length = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue finish_on_key = 5;</code>
     * @return \Google\Protobuf\StringValue
     */
    public function getFinishOnKey()
    {
        return isset($this->finish_on_key) ? $this->finish_on_key : null;
    }

    public function hasFinishOnKey()
    {
        return isset($this->finish_on_key);
    }

    public function clearFinishOnKey()
    {
        unset($this->finish_on_key);
    }

    /**
     * Returns the unboxed value from <code>getFinishOnKey()</code>

     * Generated from protobuf field <code>.google.protobuf.StringValue finish_on_key = 5;</code>
     * @return string|null
     */
    public function getFinishOnKeyUnwrapped()
    {
        return $this->readWrapperValue("finish_on_key");
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue finish_on_key = 5;</code>
     * @param \Google\Protobuf\StringValue $var
     * @return $this
     */
    public function setFinishOnKey($var)
    {
        GPBUtil::checkMessage($var, \Google\Protobuf\StringValue::class);
        $this->finish_on_key = $var;

        return $this;
    }

    /**
     * Sets the field by wrapping a primitive type in a Google\Protobuf\StringValue object.

     * Generated from protobuf field <code>.google.protobuf.StringValue finish_on_key = 5;</code>
     * @param string|null $var
     * @return $this
     */
    public function setFinishOnKeyUnwrapped($var)
    {
        $this->writeWrapperValue("finish_on_key", $var);
        return $this;}

    /**
     * Generated from protobuf field <code>bool play_beep = 6;</code>
     * @return bool
     */
    public function getPlayBeep()
    {
        return $this->play_beep;
    }

    /**
     * Generated from protobuf field <code>bool play_beep = 6;</code>
     * @param bool $var
     * @return $this
     */
    public function setPlayBeep($var)
    {
        GPBUtil::checkBool($var);
        $this->play_beep = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>bool trim_silence = 7;</code>
     * @return bool
     */
    public function getTrimSilence()
    {
        return $this->trim_silence;
    }

    /**
     * Generated from protobuf field <code>bool trim_silence = 7;</code>
     * @param bool $var
     * @return $this
     */
    public function setTrimSilence($var)
    {
        GPBUtil::checkBool($var);
        $this->trim_silence = $var;

        return $this;
    }

    /**
     * @return string
     */
    public function getPrompt()
    {
        return $this->whichOneof("prompt");
    }

}
